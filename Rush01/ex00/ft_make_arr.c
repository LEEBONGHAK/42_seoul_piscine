/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgwon <jgwon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:32:50 by jgwon             #+#    #+#             */
/*   Updated: 2022/01/16 16:14:20 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check(int *arr, int (*check_arr)[4]);
void	ft_print_arr(int (*arr)[4]);

int	ft_check_row(int (*arr)[4], int x, int y, int a)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (arr[x][i] == a)
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_col(int (*arr)[4])
{
	int	i;
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 3)
		{
			i = x + 1;
			while (i < 4)
			{
				if (arr[x][y] == arr[i][y])
					return (0);
				i++;
			}
			x++;
		}
		y++;
	}
	return (1);
}

int	ft_make_arr(int (*arr)[4], int x, int y, int *input_arr)
{
	int	i;
	int	cnt;

	cnt = 0;
	if (x == 4)
	{
		if (ft_check_col(arr) && ft_check(input_arr, arr))
		{
			ft_print_arr(arr);
			return (1);
		}
		return (0);
	}
	i = 0;
	while (++i < 5)
	{
		if (y != 0 && ft_check_row(arr, x, y, i))
			continue ;
		arr[x][y] = i;
		if (y != 3)
			cnt += ft_make_arr(arr, x, y + 1, input_arr);
		else
			cnt += ft_make_arr(arr, x + 1, 0, input_arr);
	}
	return (cnt);
}
