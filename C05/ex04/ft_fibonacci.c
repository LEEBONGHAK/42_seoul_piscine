/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:41:07 by bolee             #+#    #+#             */
/*   Updated: 2022/01/13 12:52:28 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fibonacci(int idx)
{
	if (idx == 0)
		return (0);
	else if (idx == 1)
		return (1);
	return (fibonacci(idx - 1) + fibonacci(idx - 2));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (fibonacci(index));
}
