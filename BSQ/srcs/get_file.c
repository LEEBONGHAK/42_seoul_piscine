/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosong <yosong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:27:59 by yosong            #+#    #+#             */
/*   Updated: 2022/01/25 16:48:33 by yosong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	_init_buf(char *str, t_ll size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
}

char	*get_file_str(char *file_name)
{
	int		n;
	int		fd;
	char	buf[1000];
	char	*file_str;
	t_ll	size;

	_init_buf(buf, 1000);
	fd = open(file_name, O_RDONLY);
	size = 0;
	n = 1;
	while (n > 0)
	{
		n = read(fd, buf, 1000);
		size += n;
	}
	close(fd);
	fd = open(file_name, O_RDONLY);
	file_str = (char *)malloc(sizeof(char) * (size + 1));
	char_optr_guard(file_str);
	n = read(fd, file_str, size);
	file_str[size] = '\0';
	close(fd);
	return (file_str);
}
