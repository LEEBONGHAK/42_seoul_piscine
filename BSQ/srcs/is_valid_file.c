/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosong <yosong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:27:06 by yosong            #+#    #+#             */
/*   Updated: 2022/01/25 16:24:02 by yosong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	_is_valid_file_newline(char *file_str)
{
	int	cnt;

	cnt = 0;
	while (*file_str)
	{
		if (*file_str == '\n')
			cnt++;
		file_str++;
	}
	if (cnt < 2)
		return (0);
	return (1);
}

int	_is_valid_file_printable(char *file_str)
{
	while (*file_str)
	{
		if (!(32 <= *file_str && *file_str <= 126) && !(*file_str == '\n'))
			return (0);
		file_str++;
	}
	return (1);
}

int	is_valid_file(char *file_str)
{
	if (file_str == 0)
		return (0);
	if (!_is_valid_file_newline(file_str))
		return (0);
	if (!_is_valid_file_printable(file_str))
		return (0);
	return (1);
}
