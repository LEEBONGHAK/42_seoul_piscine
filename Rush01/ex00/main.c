/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 09:45:09 by bolee             #+#    #+#             */
/*   Updated: 2022/01/16 17:02:31 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_put_in_arr(int *arr, char *argv);
int	ft_make_arr(int (*arr)[4], int x, int y, int *input_arr);

int	main(int argc, char *argv[])
{
	int	arr[16];
	int	to_find[4][4];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_put_in_arr(arr, argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!ft_make_arr(to_find, 0, 0, arr))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (0);
}
