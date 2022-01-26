/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_argc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosong <yosong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:47:34 by bolee             #+#    #+#             */
/*   Updated: 2022/01/26 19:56:21 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*one_argc(void)
{
	int		n;
	char	buf[1000];
	char	*str;
	t_ll	size;

	size = 1000;
	str = (char *)malloc(sizeof(char) * size);
	char_optr_guard(str);
	*str = '\0';
	n = 1;
	while (0 < n)
	{
		n = read(0, buf, 600);
		ft_strncat(str, buf, n);
		str = ft_realloc(str, &size);
	}
	return (str);
}
