/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_info.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosong <yosong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:27:34 by yosong            #+#    #+#             */
/*   Updated: 2022/01/25 17:20:55 by yosong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	_is_valid_info_len(char *info_str)
{
	if (ft_strlen(info_str) < 4)
		return (0);
	return (1);
}

int	_is_valid_info_duplicate(t_infos info)
{
	if (!info.empty || !info.full || !info.obstacle)
		return (0);
	if (info.empty == info.obstacle)
		return (0);
	if (info.empty == info.full)
		return (0);
	if (info.full == info.obstacle)
		return (0);
	return (1);
}

int	is_valid_info(char *info_str, t_infos info)
{
	if (info_str == 0)
		return (0);
	if (info.rows == 0)
		return (0);
	if (info.empty == 0 || info.full == 0 || info.obstacle == 0)
		return (0);
	if (!_is_valid_info_len(info_str))
		return (0);
	if (!_is_valid_info_duplicate(info))
		return (0);
	return (1);
}
