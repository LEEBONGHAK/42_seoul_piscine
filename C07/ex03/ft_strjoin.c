/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:13:59 by bolee             #+#    #+#             */
/*   Updated: 2022/01/20 16:23:08 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sep_size(char *sep)
{
	int	cnt;

	cnt = 0;
	while (sep[cnt])
		cnt++;
	return (cnt);
}

int	strs_total_size(int size, char **strs)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	cnt = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			cnt++;
			j++;
		}
		i++;
	}
	return (cnt);
}

int	put_in_str(char *ptr, char *str, int i)
{
	int	j;

	j = 0;
	while (str[j])
	{
		ptr[i] = str[j];
		i++;
		j++;
	}
	return (i);
}

void	put_to_ptr(char *ptr, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	put_in_size;

	i = 0;
	j = 0;
	put_in_size = strs_total_size(size, strs) + (sep_size(sep) * (size - 1));
	while (i < put_in_size)
	{
		i = put_in_str(ptr, strs[j], i);
		j++;
		if (j < size)
			i = put_in_str(ptr, sep, i);
	}
	ptr[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		ptr_size;
	char	*ptr;

	if (size <= 0)
	{
		ptr = (char *)malloc(sizeof(char));
		*ptr = '\0';
		return (ptr);
	}
	ptr_size = strs_total_size(size, strs) + (sep_size(sep) * (size - 1)) + 1;
	ptr = (char *)malloc(sizeof(char) * ptr_size);
	put_to_ptr(ptr, size, strs, sep);
	return (ptr);
}
