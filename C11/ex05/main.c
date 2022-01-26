/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:47:24 by bolee             #+#    #+#             */
/*   Updated: 2022/01/24 16:17:25 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex.h"

int	main(int argc, char **argv)
{
	t_ll	a;
	t_ll	b;

	if (argc != 4)
		return (0);
	if (check_operator(argv[2]))
	{
		write(1, "0\n", 2);
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	find_res(a, b, argv[2]);
	return (0);
}
