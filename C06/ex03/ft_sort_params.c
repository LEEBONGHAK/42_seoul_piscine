/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:38:09 by bolee             #+#    #+#             */
/*   Updated: 2022/01/16 14:38:40 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_arr(char *arr)
{
	while (*arr)
	{
		write(1, arr, 1);
		arr++;
	}
	write(1, "\n", 1);
}

void	swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	cmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	if (*s1 - *s2 > 0)
		return (1);
	else
		return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i;
		while (j < argc)
		{
			if (cmp(argv[i], argv[j]))
				swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		print_arr(argv[i]);
		i++;
	}
	return (0);
}
