/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:25:05 by bolee             #+#    #+#             */
/*   Updated: 2022/01/12 13:12:41 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	find_dest_size(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	cnt;

	i = 0;
	cnt = find_dest_size(dest);
	while (i < nb && src[i])
	{
		dest[cnt + i] = src[i];
		i++;
	}
	dest[cnt + i] = '\0';
	return (dest);
}
