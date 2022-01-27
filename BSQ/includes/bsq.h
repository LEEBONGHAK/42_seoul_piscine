/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosong <yosong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 09:48:45 by bolee             #+#    #+#             */
/*   Updated: 2022/01/27 10:22:17 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef long long	t_ll;

typedef struct s_infos
{
	t_ll		rows;
	t_ll		cols;
	char		empty;
	char		obstacle;
	char		full;
}	t_infos;

typedef struct s_location
{
	int			x;
	int			y;
	t_ll		len;
}	t_location;

t_ll		cnt_col(char *file_name);
t_ll		infos_size(char *file_name);
t_ll		**split(char *str, t_infos *infos, t_ll row, t_ll col);
t_location	DP(t_ll **res, t_ll row, t_ll col);
void		print_arr(char *str, t_infos *infos, t_location *loc);
void		free_two_ptr(t_ll **ptr, t_ll size);
char		*ft_realloc(char *src, t_ll *size);
char		*one_argc(void);

void		char_optr_guard(char *str);
void		long_optr_guard(t_ll *arr);
void		long_tptr_guard(t_ll **arr);

int			ft_strlen(char *str);
void		ft_strncat(char *dest, char *src, int nb);
void		ft_putstr(char *str);
void		ft_putchar(char c);
t_ll		ft_atoi(char *str);
void		get_info(char *info_str, char *map_str, t_infos *info);
char		*get_file_str(char *file_name);
char		*get_info_str(char *file_str);
char		*get_map_str(char *file_str);
int			is_valid_file(char *file_str);
int			is_valid_info(char *info_str, t_infos info);
int			is_valid_map(char *map_str, t_infos info);
int			is_valid(char *file_str, char *info_str, \
		char *map_str, t_infos info);

#endif
