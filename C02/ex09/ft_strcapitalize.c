/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:53:18 by bolee             #+#    #+#             */
/*   Updated: 2022/01/22 12:04:58 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	to_uppercase(char *ptr)
{
	if (*ptr >= 97 && *ptr <= 122)
		*ptr -= 32;
}

void	to_lowercase(char *ptr)
{
	if (*ptr >= 65 && *ptr <= 90)
		*ptr += 32;
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;

	if (*str == '\0')
		return (str);
	ptr = str;
	to_uppercase(ptr);
	ptr++;
	while (*ptr)
	{
		if (*(ptr - 1) < 48 || (*(ptr - 1) > 57 && *(ptr - 1) < 65))
			to_uppercase(ptr);
		else if ((*(ptr - 1) > 90 && *(ptr - 1) < 97) || *(ptr - 1) > 122)
			to_uppercase(ptr);
		else
			to_lowercase(ptr);
		ptr++;
	}
	return (str);
}
