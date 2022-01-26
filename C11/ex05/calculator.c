/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:17:36 by bolee             #+#    #+#             */
/*   Updated: 2022/01/24 16:14:13 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex.h"

void	add(t_ll a, t_ll b)
{
	ft_putnbr(a + b);
}

void	minus(t_ll a, t_ll b)
{
	ft_putnbr(a - b);
}

void	multi(t_ll a, t_ll b)
{
	ft_putnbr(a * b);
}

void	div(t_ll a, t_ll b)
{
	if (b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return ;
	}
	ft_putnbr(a / b);
}

void	mod(t_ll a, t_ll b)
{
	if (b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return ;
	}
	ft_putnbr(a % b);
}
