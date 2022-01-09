/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 09:29:27 by bolee             #+#    #+#             */
/*   Updated: 2022/01/08 17:39:48 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* 음수인지 확인 */
int	check_negative(int nb)
{
	if (nb < 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* 입력된 숫자의 자리수 구하기 */
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

/* 나누어야 할 수 구하기*/
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

/* 숫자 출력 */
void	print_num(int nb)
{
	int		check;
	int		for_division;
	char	tmp;

	check = check_negative(nb);
	if (check)
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
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		print_num(nb);
	}
}
