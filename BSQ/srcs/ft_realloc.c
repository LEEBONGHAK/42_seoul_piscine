/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosong <yosong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:44:32 by bolee             #+#    #+#             */
/*   Updated: 2022/01/26 14:41:58 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	_init_str(char *str, t_ll size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
}

void	_copy_buf(char *str, char *buf, t_ll size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		str[i] = buf[i];
		i++;
	}
	str[i] = '\0';
}

char	*ft_realloc(char *src, t_ll *size)
{
	t_ll	tmp;
	char	*dest;

	tmp = *size;
	dest = (char *)malloc(sizeof(char) * (tmp + 1));
	char_optr_guard(dest);
	_init_str(dest, tmp);
	_copy_buf(dest, src, tmp);
	*size += 1000;
	free(src);
	return (dest);
}
