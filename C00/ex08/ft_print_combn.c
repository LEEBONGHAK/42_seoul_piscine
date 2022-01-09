/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 09:35:17 by bolee             #+#    #+#             */
/*   Updated: 2022/01/08 09:35:20 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_pos;
int	g_arr[10];

void	print_arr(int arr[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, &arr[i], 1);
		i++;
	}
}

void	check_pos(int pos)
{
	if (pos == g_pos)
	{
		print_arr(g_arr, g_pos);
		if (g_arr[0] != '9' - g_pos + 1)
		{
			write(1, ", ", 2);
		}
		return ;
	}
}

void	print_case(int pos)
{
	char	i;

	i = '0';
	check_pos(pos);
	while (i <= '9')
	{
		if (!pos || g_arr[pos - 1] < i)
		{
			g_arr[pos] = i;
		}
		else
		{
			i++;
			continue ;
		}
		i++;
		print_case(pos + 1);
	}
}

void	ft_print_combn(int n)
{
	g_pos = n;
	print_case(0);
}
