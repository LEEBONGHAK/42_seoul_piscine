/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:25:40 by bolee             #+#    #+#             */
/*   Updated: 2022/01/20 12:36:56 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_sort(int *tab, int length, int (*f)(int, int), int sign)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	flag = 1;
	while (i < length)
	{
		j = i;
		while (j < length)
		{
			if (sign == 1 && (*f)(tab[i], tab[j]) > 0)
				flag = 0;
			else if (sign == 0 && (*f)(tab[i], tab[j]) < 0)
				flag = 0;
			j++;
		}
		i++;
	}
	return (flag);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (check_sort(tab, length, f, 1) || check_sort(tab, length, f, 0))
		return (1);
	return (0);
}
