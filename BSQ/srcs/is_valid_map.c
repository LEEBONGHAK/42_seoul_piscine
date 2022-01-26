/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosong <yosong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:39:26 by yosong            #+#    #+#             */
/*   Updated: 2022/01/25 17:21:06 by yosong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	_is_info(char c, t_infos info)
{
	if (c == info.empty || c == info.obstacle)
		return (1);
	else if (c == '\n')
		return (2);
	return (0);
}

int	_is_valid_map_square(char *map_str, t_ll row)
{
	t_ll	len;

	while (*map_str != '\n')
	{
		row++;
		map_str++;
	}
	len = 0;
	map_str++;
	while (*map_str)
	{
		if (*map_str == '\n')
		{
			if (len != row)
				return (0);
			len = 0;
			map_str++;
		}
		if (!*map_str)
			break ;
		map_str++;
		len++;
	}
	return (1);
}

int	_is_valid_map_newline(char *map_str)
{
	while (*map_str)
	{
		while (32 <= *map_str && *map_str <= 126)
			map_str++;
		if (*map_str != '\n')
			return (0);
		if (*map_str == '\n' && *(map_str + 1) == '\n')
			return (0);
		map_str++;
	}
	return (1);
}

int	_is_valid_map_is_info(char *map_str, t_infos info)
{
	t_ll	newline_len;

	newline_len = 0;
	while (*map_str)
	{
		if (!_is_info(*map_str, info))
			return (0);
		if (_is_info(*map_str, info) == 2)
			newline_len ++;
		map_str++;
	}
	if (newline_len != info.rows)
		return (0);
	return (1);
}

int	is_valid_map(char *map_str, t_infos info)
{
	if (map_str == 0)
		return (0);
	if (info.rows == 0)
		return (0);
	if (info.empty == 0 || info.full == 0 || info.obstacle == 0)
		return (0);
	if (!_is_valid_map_square(map_str, 0))
		return (0);
	if (!_is_valid_map_newline(map_str))
		return (0);
	if (!_is_valid_map_is_info(map_str, info))
		return (0);
	return (1);
}
