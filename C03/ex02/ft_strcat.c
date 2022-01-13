/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:10:18 by bolee             #+#    #+#             */
/*   Updated: 2022/01/10 12:23:31 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_dest_size(char *dest)
{
	int	cnt;

	cnt = 0;
	while (*dest)
	{
		dest++;
		cnt++;
	}
	return (cnt);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = find_dest_size(dest);
	while (src[i] != '\0')
	{
		dest[cnt + i] = src[i];
		i++;
	}
	dest[cnt + i] = src[i];
	return (dest);
}
