/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:42:34 by bolee             #+#    #+#             */
/*   Updated: 2022/01/13 18:36:09 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	print_arr(char *arr)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		print(*(arr + i));
		i++;
	}
	print('\n');
}

int	check(int pos, char *arr)
{
	int			i;
	char		c;

	i = 0;
	c = arr[pos];
	while (i < pos)
	{
		if (arr[i] == c || arr[i] - (pos - i) == c || arr[i] + (pos - i) == c)
			return (0);
		i++;
	}
	return (1);
}

int	res(int pos)
{
	char		i;
	int			cnt;
	static char	arr[10];

	cnt = 0;
	if (pos == 10)
	{
		print_arr(arr);
		return (1);
	}
	i = '0';
	while (i <= '9')
	{
		arr[pos] = i;
		if (check(pos, arr))
			cnt += res(pos + 1);
		i++;
	}
	return (cnt);
}

int	ft_ten_queens_puzzle(void)
{
	return (res(0));
}
