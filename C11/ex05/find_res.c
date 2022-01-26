/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_res.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:42:07 by bolee             #+#    #+#             */
/*   Updated: 2022/01/24 16:15:17 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex.h"

void	find_res(t_ll a, t_ll b, char *str)
{
	void	(*f[5])(t_ll, t_ll);

	f[0] = add;
	f[1] = minus;
	f[2] = multi;
	f[3] = div;
	f[4] = mod;
	if (*str == '+')
		f[0](a, b);
	else if (*str == '-')
		f[1](a, b);
	else if (*str == '*')
		f[2](a, b);
	else if (*str == '/')
		f[3](a, b);
	else
		f[4](a, b);
}
