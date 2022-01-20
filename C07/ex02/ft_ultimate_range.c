/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:52:07 by bolee             #+#    #+#             */
/*   Updated: 2022/01/20 16:22:59 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int *tmp, int min, int max)
{
	int	i;
	int	j;

	i = min;
	j = 0;
	while (i < max)
	{
		tmp[j] = i;
		i++;
		j++;
	}
	return (tmp);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int			*tmp;
	long long	len;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;	// overflow handling
	tmp = (int *)malloc(sizeof(int) * len);
	if (tmp == 0)
		return (-1);
	*range = ft_range(tmp, min, max);
	return (len);
}
