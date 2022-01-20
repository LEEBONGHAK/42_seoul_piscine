/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:37:43 by bolee             #+#    #+#             */
/*   Updated: 2022/01/20 16:21:54 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			i;
	int			j;
	int			*ptr;
	long long	tmp;

	if (min >= max)
		return (0);
	i = min;
	j = 0;
	tmp = max - min;	// overflow handling
	ptr = (int *)malloc(sizeof(int) * tmp);
	while (i < max)
	{
		ptr[j] = i;
		i++;
		j++;
	}
	return (ptr);
}
