/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:26:19 by bolee             #+#    #+#             */
/*   Updated: 2022/01/13 20:31:42 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*ptr;

	i = argc;
	ptr = argv[0];
	while (*ptr)
	{
		write(1, ptr, 1);
		ptr++;
	}
	write(1, "\n", 1);
	return (0);
}
