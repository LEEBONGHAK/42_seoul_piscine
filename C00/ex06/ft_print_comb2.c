/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:50:47 by bolee             #+#    #+#             */
/*   Updated: 2022/01/08 09:28:13 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_arr(char *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, arr + i, 1);
		i++;
	}
	if (!(arr[0] == '9' && arr[1] == '8'))
	{
		write(1, ", ", 2);
	}
}

void	update_front(char *arr)
{
	if (arr[1] != '9')
	{
		arr[1]++;
	}
	else
	{
		arr[0]++;
		arr[1] = '0';
	}
	if (arr[1] != '9')
	{
		arr[3] = arr[0];
		arr[4] = arr[1] + 1;
	}
	else
	{
		arr[3] = arr[0] + 1;
		arr[4] = '0';
	}
}

void	update_back(char *arr)
{
	if (arr[4] != '9')
	{
		arr[4]++;
	}
	else
	{
		arr[3]++;
		arr[4] = '0';
	}
}

void	ft_print_comb2(void)
{
	char	arr[5];

	arr[0] = '0';
	arr[1] = '0';
	arr[2] = ' ';
	arr[3] = '0';
	arr[4] = '1';
	while (!(arr[0] == '9' && arr[1] == '9'))
	{
		print_arr(arr, 5);
		if (arr[3] == '9' && arr[4] == '9')
		{
			update_front(arr);
		}
		else
		{
			update_back(arr);
		}
	}
}
