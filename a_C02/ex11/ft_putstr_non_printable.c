/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:04:32 by bolee             #+#    #+#             */
/*   Updated: 2022/01/12 18:51:59 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{	
	write(1, &c, 1);
}

void	print_hex(int c)
{
	char	*base;

	if (c < 0)
		c += 256;
	base = "0123456789abcdef";
	print(base[c / 16]);
	print(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			print('\\');
			print_hex((int) *str);
		}
		else
			print(*str);
		str++;
	}
}
