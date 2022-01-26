/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:15:16 by bolee             #+#    #+#             */
/*   Updated: 2022/01/24 16:16:31 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex.h"

t_ll	ft_atoi(char *str)
{
	t_ll	res;
	t_ll	sign;

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
		res = res * 10 + *str - 48;
		str++;
	}
	return (sign * res);
}
