/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:22:49 by bolee             #+#    #+#             */
/*   Updated: 2022/01/15 11:55:07 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

int	base_size(char *base)
{
	int	cnt;

	cnt = 0;
	while (base[cnt])
		cnt++;
	return (cnt);
}

int	check_exception(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base_size(base) == 0 || base_size(base) == 1)
		return (1);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	base_res(int nbr, char *base)
{
	int	size;
	int	div;
	int	mod;

	size = base_size(base);
	div = nbr / size;
	mod = nbr % size;
	if (div >= size)
		base_res(div, base);
	else if (div != 0)
		print(base[div]);
	print(base[mod]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (check_exception(base))
		return ;
	if (nbr == -2147483648)
	{
		print('-');
		base_res(2147483648 / base_size(base), base);
		base_res(2147483648 % base_size(base), base);
	}
	else if (nbr < 0)
	{
		print('-');
		nbr *= -1;
		base_res(nbr, base);
	}
	else
		base_res(nbr, base);
}
