/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 09:29:27 by bolee             #+#    #+#             */
/*   Updated: 2022/01/22 12:01:35 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_number_of_digits(int nb)
{
	int	cnt;

	cnt = 0;
	while (nb != 0)
	{
		nb /= 10;
		cnt++;
	}
	return (cnt);
}

int	find_for_division(int nb)
{
	int	i;
	int	cnt;
	int	for_division;

	i = 1;
	for_division = 1;
	cnt = count_number_of_digits(nb);
	while (i < cnt)
	{
		for_division *= 10;
		i++;
	}
	return (for_division);
}

void	print_num(int nb)
{
	int		for_division;
	char	tmp;

	if (nb < 0)
	{
		nb = -1 * nb;
		write(1, "-", 1);
	}
	for_division = find_for_division(nb);
	while (for_division != 0)
	{
		tmp = 48 + nb / for_division;
		write(1, &tmp, 1);
		nb %= for_division;
		for_division /= 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
		print_num(nb);
}
