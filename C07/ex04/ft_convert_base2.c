/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:22:25 by bolee             #+#    #+#             */
/*   Updated: 2022/01/20 16:24:01 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_size(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

long long	find_res(long long res, char *str, char *base, int flag)
{
	int	i;

	while (*str)
	{
		i = -1;
		flag = 1;
		while (base[++i])
		{
			if (*str == base[i])
			{
				res = res * base_size(base) + i;
				flag = 0;
			}
		}
		if (flag)
			return (res);
		str++;
	}
	return (res);
}

int	check_exception(char *base)
{
	int	i;
	int	j;
	int	size;

	size = base_size(base);
	i = 0;
	if (size == 0 || size == 1)
		return (1);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == '\t' \
				|| base[i] == '\n' || base[i] == '\v' || base[i] == '\f' \
				|| base[i] == '\r' || base[i] == ' ')
			return (1);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

long long	ft_convert_base2(char *nbr, char *base)
{
	int	sign;

	sign = 1;
	while (*nbr == ' ' || *nbr == '\t' || *nbr == '\n' \
			|| *nbr == '\v' || *nbr == '\f' || *nbr == '\r')
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	return (sign * find_res(0, nbr, base, 0));
}
