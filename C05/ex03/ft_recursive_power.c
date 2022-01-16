/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:33:57 by bolee             #+#    #+#             */
/*   Updated: 2022/01/13 12:40:10 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursive(int nb, int power, int res)
{
	if (power == 0)
		return (res);
	return (recursive(nb, power - 1, res * nb));
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	return (recursive(nb, power, 1));
}
