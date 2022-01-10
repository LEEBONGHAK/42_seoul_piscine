/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:45:02 by bolee             #+#    #+#             */
/*   Updated: 2022/01/08 17:45:04 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	cnt;	

	i = 0;
	cnt = 0;
	while (*(str + i) != '\0')
	{
		cnt++;
		i++;
	}
	return (cnt);
}