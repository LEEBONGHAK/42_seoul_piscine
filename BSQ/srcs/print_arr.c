/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:07:07 by bolee             #+#    #+#             */
/*   Updated: 2022/01/24 15:36:40 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	check_full(t_location *loc, t_ll col, t_ll row)
{
	if (col >= (t_ll) loc->x - loc->len + 1 && col <= (t_ll) loc->x && \
			row >= (t_ll) loc->y - loc->len + 1 && row <= (t_ll) loc->y)
		return (1);
	return (0);
}

void	print_arr(char *str, t_infos *infos, t_location *loc)
{
	int		i;
	t_ll	col;
	t_ll	row;

	i = 0;
	row = 0;
	col = 0;
	while (str[i])
	{
		if (check_full(loc, col, row))
			str[i] = infos->full;
		if (str[i] == '\n')
		{
			row++;
			col = 0;
			i++;
			continue ;
		}
		col++;
		i++;
	}
	write(1, str, (infos->cols + 1) * infos->rows);
}
