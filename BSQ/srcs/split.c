/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:26:55 by bolee             #+#    #+#             */
/*   Updated: 2022/01/24 14:30:36 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_ll	*_put_in_ptr(char *str, t_infos *infos, t_ll i, t_ll col)
{
	t_ll	k;
	t_ll	*ptr;

	ptr = (t_ll *)malloc(sizeof(t_ll) * col + 1);
	long_optr_guard(ptr);
	k = 0;
	while (k < col + 1)
	{
		if (k == 0)
			ptr[k] = 0;
		else if (str[i + k - 1] == infos->empty)
			ptr[k] = 1;
		else if (str[i + k - 1] == infos->obstacle)
			ptr[k] = 0;
		k++;
	}
	return (ptr);
}

void	_put_in_res(t_ll **res, char *str, t_infos *infos, t_ll col)
{
	t_ll	i;
	t_ll	word;

	i = 0;
	word = 1;
	while (str[i])
	{
		if (str[i] == '\n')
			i++;
		else
		{
			res[word] = _put_in_ptr(str, infos, i, col);
			i += col;
			word++;
		}
	}
}

t_ll	**split(char *str, t_infos *infos, t_ll row, t_ll col)
{
	t_ll	i;
	t_ll	**res;
	t_ll	*ptr;

	res = (t_ll **)malloc(sizeof(t_ll *) * (row + 1));
	long_tptr_guard(res);
	ptr = (t_ll *)malloc(sizeof(t_ll) * (col + 1));
	long_optr_guard(ptr);
	i = 0;
	while (i < col + 1)
	{
		ptr[i] = 0;
		i++;
	}
	res[0] = ptr;
	_put_in_res(res, str, infos, col);
	return (res);
}
