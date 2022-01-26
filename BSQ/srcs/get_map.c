/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosong <yosong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:27:20 by yosong            #+#    #+#             */
/*   Updated: 2022/01/25 13:47:42 by yosong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*get_map_str(char *file_str)
{
	int		map_len;
	int		i;
	int		j;
	int		map_start_index;
	char	*map_str;

	i = 0;
	while (file_str[i] != '\n' && file_str[i] != '\0')
		i++;
	map_start_index = i + 1;
	i = map_start_index;
	map_len = 0;
	while (file_str[i++] != '\0')
		map_len++;
	map_str = (char *)malloc(sizeof(char) * (map_len + 1));
	char_optr_guard(map_str);
	i = map_start_index;
	j = 0;
	while (file_str[i] != '\0')
	{
		map_str[j++] = file_str[i];
		i++;
	}
	map_str[j] = '\0';
	return (map_str);
}
