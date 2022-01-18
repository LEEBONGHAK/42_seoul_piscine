/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 20:35:02 by bolee             #+#    #+#             */
/*   Updated: 2022/01/17 09:32:54 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*ptr;

	i = argc - 1;
	while (i > 0)
	{
		ptr = argv[i];
		while (*ptr)
		{
			write(1, ptr, 1);
			ptr++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
