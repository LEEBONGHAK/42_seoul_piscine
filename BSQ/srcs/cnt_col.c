/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cnt_col.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:27:08 by bolee             #+#    #+#             */
/*   Updated: 2022/01/24 14:29:40 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_ll	cnt_col(char *file_name)
{
	int		flag;
	t_ll	cnt;
	int		input_file;
	char	buf[2];

	flag = 0;
	cnt = 0;
	input_file = open(file_name, O_RDONLY);
	while (0 < read(input_file, buf, 1))
	{
		if (flag && buf[0] == '\n')
			break ;
		if (flag)
			cnt++;
		if (buf[0] == '\n')
			flag = 1;
	}
	close(input_file);
	return (cnt);
}
