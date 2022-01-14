/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:50:23 by bolee             #+#    #+#             */
/*   Updated: 2022/01/12 18:41:10 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	for_hex(unsigned long c)
{
	char			*base;
	unsigned long	div;
	unsigned long	mod;

	base = "0123456789abcdef";
	div = c / 16;
	mod = c % 16;
	if (div >= 16)
		for_hex(div);
	else
		print(base[div]);
	print(base[mod]);
}

void	print_ptr_addr(unsigned long addr)
{
	int				i;
	int				digits;
	unsigned long	tmp;

	digits = 0;
	tmp = addr;
	while (tmp != 0)
	{
		tmp /= 16;
		digits++;
	}
	i = 0;
	while (i < 16 - digits)
	{
		print('0');
		i++;
	}
	for_hex(addr);
}

void	print_addr(unsigned char *addr, unsigned int print_size)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < print_size)
			for_hex((unsigned long) *(addr + i));
		else if (i < 16)
			write(1, "  ", 2);
		if (i % 2 == 1)
			print(' ');
		i++;
	}
	i = 0;
	while (i < print_size)
	{
		if (*(addr + i) < 32 || *(addr + i) > 126)
			print('.');
		else
			print(*(addr + i));
		i++;
	}
	print('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	print_size;

	i = 0;
	if (!size)
		return (addr);
	while (i * 16 < size)
	{
		if (i < size / 16)
			print_size = 16;
		else
			print_size = size % 16;
		print_ptr_addr((unsigned long) addr);
		write(1, ": ", 2);
		print_addr((unsigned char *) addr, print_size);
		addr += 16;
		i++;
	}
	return (addr);
}
