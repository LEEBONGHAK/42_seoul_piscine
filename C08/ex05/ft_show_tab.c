/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:58:32 by bolee             #+#    #+#             */
/*   Updated: 2022/01/20 10:03:22 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	print_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	print_size(int size)
{
	int		div;
	int		mod;
	char	tmp;

	div = size / 10;
	mod = size % 10;
	if (div != 0)
		print_size(div);
	tmp = mod + '0';
	write(1, &tmp, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	size;

	size = 0;
	while (par[size].str != 0)
		size++;
	i = 0;
	while (i < size)
	{
		print_str(par[i].str);
		print_size(par[i].size);
		write(1, "\n", 1);
		print_str(par[i].copy);
		i++;
	}
}
