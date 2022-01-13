/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:49:51 by bolee             #+#    #+#             */
/*   Updated: 2022/01/13 11:40:51 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && i < n - 1 && *s1)
	{
		s1++;
		s2++;
		i++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
