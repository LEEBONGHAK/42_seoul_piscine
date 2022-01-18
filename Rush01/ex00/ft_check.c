/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpark <dpark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 11:13:15 by dpark             #+#    #+#             */
/*   Updated: 2022/01/16 16:34:06 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkl(int *arr, int (*check_arr)[4], int k)
{
	int	i;
	int	j;
	int	count;
	int	max;

	i = 0;
	while (i < 4)
	{
		count = 0;
		max = 0;
		j = 0;
		while (j < 4)
		{
			if (check_arr[i][j] > max)
			{
				max = check_arr[i][j];
				count++;
			}
			j++;
		}
		if (count != arr[k++])
			return (1);
		i++;
	}
	return (0);
}

int	ft_checkr(int *arr, int (*check_arr)[4], int k)
{
	int	i;
	int	j;
	int	count;
	int	max;

	i = 0;
	while (i < 4)
	{
		count = 0;
		max = 0;
		j = 3;
		while (j >= 0)
		{
			if (check_arr[i][j] > max)
			{
				max = check_arr[i][j];
				count++;
			}
			j--;
		}
		if (count != arr[k++])
			return (1);
		i++;
	}
	return (0);
}

int	ft_checku(int *arr, int (*check_arr)[4], int k)
{
	int	i;
	int	j;
	int	count;
	int	max;

	j = 0;
	while (j < 4)
	{
		count = 0;
		max = 0;
		i = 0;
		while (i < 4)
		{
			if (check_arr[i][j] > max)
			{
				max = check_arr[i][j];
				count++;
			}
			i++;
		}
		if (count != arr[k++])
			return (1);
		j++;
	}
	return (0);
}

int	ft_checkd(int *arr, int (*check_arr)[4], int k)
{
	int	i;
	int	j;
	int	count;
	int	max;

	j = 0;
	while (j < 4)
	{
		count = 0;
		max = 0;
		i = 3;
		while (i >= 0)
		{
			if (check_arr[i][j] > max)
			{
				max = check_arr[i][j];
				count++;
			}
			i--;
		}
		if (count != arr[k++])
			return (1);
		j++;
	}
	return (0);
}

int	ft_check(int *arr, int (*check_arr)[4])
{
	if (ft_checku(arr, check_arr, 0) || ft_checkd(arr, check_arr, 4) || \
			ft_checkl(arr, check_arr, 8) || ft_checkr(arr, check_arr, 12))
		return (0);
	return (1);
}
