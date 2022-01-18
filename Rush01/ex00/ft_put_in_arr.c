/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_in_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:01:14 by bolee             #+#    #+#             */
/*   Updated: 2022/01/16 16:35:56 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_atoi(int *res, char *str, int i);

int	ft_put_in_arr(int *arr, char *argv)
{
	int	i;
	int	res;

	i = 0;
	while (*argv)
	{
		res = 0;
		argv = ft_atoi(&res, argv, i);
		if (i > 15 && res == 0)
			return (0);
		if (res < 1 || res > 4)
			return (1);
		else
		{
			*(arr + i) = res;
			i++;
		}
		argv++;
	}
	if (i < 16)
		return (1);
	return (0);
}
