/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:32:30 by bolee             #+#    #+#             */
/*   Updated: 2022/01/13 16:19:44 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_prime(long long num)
{
	long long	j;

	j = 2;
	while ((j * j) <= num)
	{
		if (num % j == 0)
			return (0);
		j++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int			res;
	long long	i;

	res = 0;
	i = (long long) nb;
	while (i <= 2147483647)
	{
		if (i < 2)
		{
			i++;
			continue ;
		}
		if (check_prime(i))
		{
			res = (int) i;
			break ;
		}
		i++;
	}
	return (res);
}				
