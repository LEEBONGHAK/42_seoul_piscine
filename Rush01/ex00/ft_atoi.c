/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 09:45:41 by bolee             #+#    #+#             */
/*   Updated: 2022/01/16 16:36:14 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cal_res(int res, char *str)
{
	if (res == 0)
		res += *str - 48;
	else
		res = res * 10 + *str - 48;
	return (res);
}

int	check_last(int *res, char *str, int i)
{
	if (i > 15 && *str != '\0')
	{
		*res = -1;
		return (1);
	}
	return (0);
}

char	*ft_atoi(int *res, char *str, int i)
{
	int	sign;

	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' \
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (check_last(res, str, i))
		return (str - 1);
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		*res = cal_res(*res, str);
		str++;
	}
	*res = sign * (*res);
	return (str - 1);
}
