/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosong <yosong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:13:23 by yosong            #+#    #+#             */
/*   Updated: 2022/01/25 16:57:38 by yosong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

void	ft_strncat(char *dest, char *src, int nb)
{
	int	i;

	while (*dest)
		dest++;
	i = 0;
	while (src[i] && i < nb)
	{
		*(dest + i) = src[i];
		i++;
	}
	*(dest + i) = '\0';
}

t_ll	ft_atoi(char *str)
{
	long long int	sum;

	sum = 0;
	while (*str)
	{
		if ('0' <= *str && *str <= '9')
			sum = sum * 10 + (*str - '0');
		else
			return (0);
		str++;
	}
	return (sum);
}
