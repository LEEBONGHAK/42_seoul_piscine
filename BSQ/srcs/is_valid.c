/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosong <yosong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:10:36 by yosong            #+#    #+#             */
/*   Updated: 2022/01/25 17:14:41 by yosong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	is_valid(char *file_str, char *info_str, char *map_str, t_infos info)
{
	if (!is_valid_file(file_str))
		return (0);
	if (!is_valid_info(info_str, info))
		return (0);
	if (!is_valid_map(map_str, info))
		return (0);
	return (1);
}
