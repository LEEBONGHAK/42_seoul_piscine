/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   null_guards.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 09:54:55 by bolee             #+#    #+#             */
/*   Updated: 2022/01/24 14:30:44 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	char_optr_guard(char *str)
{
	if (str == 0)
		exit(1);
}

void	long_optr_guard(t_ll *arr)
{
	if (arr == 0)
		exit(1);
}

void	long_tptr_guard(t_ll **arr)
{
	if (arr == 0)
		exit(1);
}
