/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DP.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:20:54 by bolee             #+#    #+#             */
/*   Updated: 2022/01/24 14:27:50 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_ll	_find_min(t_ll **res, t_ll i, t_ll j)
{
	t_ll	min;

	min = res[i - 1][j - 1];
	if (min > res[i - 1][j])
		min = res[i - 1][j];
	if (min > res[i][j - 1])
		min = res[i][j - 1];
	return (min);
}

void	_set_DP(t_ll **res, t_ll row, t_ll col)
{
	t_ll	i;
	t_ll	j;

	i = 1;
	while (i < row + 1)
	{
		j = 1;
		while (j < col + 1)
		{
			if (res[i][j] == 0)
			{
				j++;
				continue ;
			}
			res[i][j] = _find_min(res, i, j) + 1;
			j++;
		}
		i++;
	}
}

t_location	DP(t_ll **res, t_ll row, t_ll col)
{
	t_ll		i;
	t_ll		j;
	t_location	loc;

	loc.x = 0;
	loc.y = 0;
	loc.len = 0;
	_set_DP(res, row, col);
	i = 1;
	while (i < row + 1)
	{
		j = 1;
		while (j < col + 1)
		{
			if (res[i][j] > loc.len)
			{
				loc.x = j - 1;
				loc.y = i - 1;
				loc.len = res[i][j];
			}
			j++;
		}
		i++;
	}
	return (loc);
}
