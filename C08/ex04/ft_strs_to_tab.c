/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:34:42 by bolee             #+#    #+#             */
/*   Updated: 2022/01/20 10:03:30 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	find_size(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

void	put_in_struct(t_stock_str *ptr, char *av)
{
	int		i;
	int		size;
	char	*tmp1;
	char	*tmp2;

	size = find_size(av);
	ptr->size = size;
	tmp1 = (char *)malloc(sizeof(char) * (size + 1));
	tmp2 = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	while (i < size)
	{
		tmp1[i] = av[i];
		tmp2[i] = av[i];
		i++;
	}
	tmp1[i] = '\0';
	tmp2[i] = '\0';
	ptr->str = tmp1;
	ptr->copy = tmp2;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ptr;

	if (ac < 0)
		return (0);
	ptr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	ptr[ac].str = 0;
	ptr[ac].copy = 0;
	ptr[ac].size = 0;
	i = 0;
	while (i < ac)
	{
		put_in_struct(&ptr[i], av[i]);
		i++;
	}
	return (ptr);
}
