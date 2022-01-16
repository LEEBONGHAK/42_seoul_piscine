/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 09:29:44 by bolee             #+#    #+#             */
/*   Updated: 2022/01/13 12:38:38 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursive(int nb, int res)
{
	if (nb == 0)
		return (res);
	return (recursive(nb - 1, res * nb));
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	return (recursive(nb, 1));
}
