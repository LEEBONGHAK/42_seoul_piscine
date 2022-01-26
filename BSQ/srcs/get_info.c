/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosong <yosong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:25:11 by yosong            #+#    #+#             */
/*   Updated: 2022/01/25 17:13:48 by yosong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_ll	_get_info_cols(char *map_str)
{
	int	len;

	len = 0;
	while (*map_str != '\n' && *map_str != '\0')
	{
		len++;
		map_str++;
	}
	return (len);
}

char	*get_info_str(char *file_str)
{
	int		info_len;
	int		i;
	char	*info_str;

	info_len = 0;
	i = 0;
	while (file_str[i] != '\n' && file_str[i] != '\0')
	{
		info_len++;
		i++;
	}
	info_str = (char *)malloc(sizeof(char) * (info_len + 1));
	char_optr_guard(info_str);
	i = 0;
	while (file_str[i] != '\n' && file_str[i] != '\0')
	{
		info_str[i] = file_str[i];
		i++;
	}
	info_str[i] = '\0';
	return (info_str);
}

void	get_info(char *info_str, char *map_str, t_infos *info)
{
	int		info_len;
	char	tmp;

	info_len = ft_strlen(info_str);
	if (info_len != 0)
	{
		info->full = info_str[info_len - 1];
		info->obstacle = info_str[info_len - 2];
		info->empty = info_str[info_len - 3];
		tmp = info_str[info_len - 3];
		info_str[info_len - 3] = '\0';
		info->rows = ft_atoi(info_str);
		info->cols = _get_info_cols(map_str);
		info_str[info_len - 3] = tmp;
	}
}
