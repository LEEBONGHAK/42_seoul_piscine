/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:15:51 by bolee             #+#    #+#             */
/*   Updated: 2022/01/22 12:05:05 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_size(char *str)
{
	unsigned int	cnt;

	cnt = 0;
	while (*str)
	{
		str++;
		cnt++;
	}
	return (cnt);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;

	i = 0;
	src_size = str_size(src);
	if (size < 1)
		return (src_size);
	while (*src && i < size - 1)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	return (src_size);
}
