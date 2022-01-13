/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:30:57 by bolee             #+#    #+#             */
/*   Updated: 2022/01/13 10:26:58 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_same(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (*(to_find + i))
	{
		if (*(str + i) != *(to_find + i))
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			if (check_same(str, to_find))
				return (str);
		}
		str++;
	}
	return (0);
}
