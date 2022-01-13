/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:56:46 by bolee             #+#    #+#             */
/*   Updated: 2022/01/12 19:38:11 by bolee            ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	dest_size = str_size(dest);
	i = dest_size;
	src_size = str_size(src);
	if (size < dest_size)
		return (src_size + size);
	while (i + 1 < size && *src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest_size + src_size);
}
