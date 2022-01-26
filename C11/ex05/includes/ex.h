/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:25:03 by bolee             #+#    #+#             */
/*   Updated: 2022/01/24 16:14:47 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX_H
# define EX_H

# include <unistd.h>

typedef long long	t_ll;

int		check_operator(char *str);
t_ll	ft_atoi(char *str);
void	ft_putnbr(t_ll nb);
void	find_res(t_ll a, t_ll b, char *str);

void	add(t_ll a, t_ll b);
void	minus(t_ll a, t_ll b);
void	multi(t_ll a, t_ll b);
void	div(t_ll a, t_ll b);
void	mod(t_ll a, t_ll b);

#endif
