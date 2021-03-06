/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_two_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosong <yosong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:54:48 by bolee             #+#    #+#             */
/*   Updated: 2022/01/25 17:17:13 by yosong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_two_ptr(t_ll **ptr, t_ll size)
{
	t_ll	i;

	i = 0;
	while (i < size + 1)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}
