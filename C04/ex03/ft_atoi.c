/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:20:36 by bolee             #+#    #+#             */
/*   Updated: 2022/01/15 11:15:59 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cal_res(int res, char *str)
{
	if (res == 0)
		res += *str - 48;
	else
	{
		res *= 10;
		res += *str - 48;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
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
	while (*str >= '0' && *str <= '9')
	{
		res = cal_res(res, str);
		str++;
	}
	return (sign * res);
}
