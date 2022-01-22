/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:41:12 by bolee             #+#    #+#             */
/*   Updated: 2022/01/22 10:14:18 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_char(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	cnt_words(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		if (check_char(*str, charset) == 0 && \
				check_char(*(str + 1), charset) == 1)
			cnt++;
		str++;
	}
	if (check_char(*(str - 1), charset) == 0)
		cnt++;
	return (cnt);
}

char	*put_in_ptr(char *str, int i, int j)
{
	int		k;
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * (j + 1));
	k = 0;
	while (k < j)
	{
		ptr[k] = str[i + k];
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}

void	put_in_res(char **res, char *str, char *charset)
{
	int		i;
	int		j;
	int		word;
	char	*ptr;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (check_char(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (charset[0] && check_char(str[i + j], charset) == 0)
				j++;
			while (!(charset[0]) && str[j])
				j++;
			ptr = put_in_ptr(str, i, j);
			res[word] = ptr;
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**res;

	if (*charset)
		words = cnt_words(str, charset);
	else
		words = 1;
	res = (char **)malloc(sizeof(char *) * (words + 1));
	res[words] = 0;
	put_in_res(res, str, charset);
	return (res);
}
