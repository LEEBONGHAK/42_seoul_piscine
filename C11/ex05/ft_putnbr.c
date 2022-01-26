/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:37:24 by bolee             #+#    #+#             */
/*   Updated: 2022/01/24 16:13:21 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex.h"

t_ll	cnt_digits(t_ll nb)
{
	t_ll	cnt;

	cnt = 0;
	while (nb != 0)
	{
		nb /= 10;
		cnt++;
	}
	return (cnt);
}

t_ll	find_first_div(t_ll nb)
{
	t_ll	i;
	t_ll	res;
	t_ll	digits;

	i = 0;
	res = 1;
	digits = cnt_digits(nb) - 1;
	while (i < digits)
	{
		res *= 10;
		i++;
	}
	return (res);
}

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(t_ll nb)
{
	t_ll	div;
	char	for_print;

	if (nb < 0)
	{
		nb *= -1;
		print('-');
	}
	div = find_first_div(nb);
	while (div != 0)
	{
		for_print = '0' + nb / div;
		print(for_print);
		nb %= div;
		div /= 10;
	}
	print('\n');
}
