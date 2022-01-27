/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:42:08 by bolee             #+#    #+#             */
/*   Updated: 2022/01/27 16:45:59 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	no_argv(char *file_str, char *info_str, char *map_str)
{
	t_infos		info;
	long long	**res;
	t_location	loc;

	file_str = one_argc();
	info_str = get_info_str(file_str);
	map_str = get_map_str(file_str);
	get_info(info_str, map_str, &info);
	if (!is_valid(file_str, info_str, map_str, info))
	{
		write(1, "map error\n\n", 10);
		free(file_str);
		free(map_str);
		free(info_str);
		return ;
	}
	res = split(map_str, &info, info.rows, info.cols);
	loc = DP(res, info.rows, info.cols);
	print_arr(map_str, &info, &loc);
	free(file_str);
	free(map_str);
	free(info_str);
	free_two_ptr(res, info.rows);
}

void	ok_argv(char *file_str, char *info_str, char *map_str, char *argv)
{
	t_infos		info;
	long long	**res;
	t_location	loc;

	file_str = get_file_str(argv);
	info_str = get_info_str(file_str);
	map_str = get_map_str(file_str);
	get_info(info_str, map_str, &info);
	if (!is_valid(file_str, info_str, map_str, info))
	{
		write(1, "map error\n\n", 10);
		free(file_str);
		free(map_str);
		free(info_str);
		return ;
	}
	res = split(map_str, &info, info.rows, info.cols);
	loc = DP(res, info.rows, info.cols);
	print_arr(map_str, &info, &loc);
	free(file_str);
	free(map_str);
	free(info_str);
	free_two_ptr(res, info.rows);
	return ;
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*file_str;
	char	*info_str;
	char	*map_str;

	file_str = 0;
	info_str = 0;
	map_str = 0;
	if (argc == 1)
		no_argv(file_str, info_str, map_str);
	i = 1;
	while (i < argc)
	{
		ok_argv(file_str, info_str, map_str, argv[i]);
		i++;
	}
	return (0);
}
