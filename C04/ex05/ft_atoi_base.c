/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:24:32 by bolee             #+#    #+#             */
/*   Updated: 2022/01/19 18:24:33 by bolee            ###   ########.fr       */
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

int	find_res(int res, char *str, char *base, int flag)
{
	int	i;

	while (*str)
	{
		i = 0;
		flag = 1;
		while (base[i])
		{
			if (*str == base[i])
			{
				res = res * base_size(base) + i;
				flag = 0;
			}
			i++;
		}
		if (flag)
			return (res);
		str++;
	}
	return (res);
}

int	ft_atoi(char *str, char *base)
{
	int	sign;

	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' \
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	return (sign * find_res(0, str, base, 0));
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

int	ft_atoi_base(char *str, char *base)
{
	if (check_exception(base))
		return (0);
	return (ft_atoi(str, base));
}
