/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:15:22 by bolee             #+#    #+#             */
/*   Updated: 2022/01/19 17:17:47 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*ptr;

	i = 0;
	ptr = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		ptr[i] = (*f)(tab[i]);
		i++;
	}
	return (ptr);
}
