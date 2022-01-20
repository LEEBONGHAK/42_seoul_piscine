/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:21:40 by bolee             #+#    #+#             */
/*   Updated: 2022/01/20 16:25:12 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	base_size(char *base);
int	check_exception(char *base);
int	ft_convert_base2(char *nbr, char *base);

int	find_size(long long num, char *base)
{
	int	cnt;

	cnt = 0;
	while (num != 0)
	{
		num /= (long long) base_size(base);
		cnt ++;
	}
	return (cnt);
}

void	base_res(long long num, char *base, char *ptr, int i)
{
	long long	size;
	long long	div;
	long long	mod;

	size = (long long) base_size(base);
	div = num / size;
	mod = num % size;
	if (div != 0)
		base_res(div, base, ptr, i + 1);
	ptr[i] = base[mod];
}

char	*make_ptr(long long num, char *base_to)
{
	char		*ptr;

	if (num < 0)
	{
		num *= -1;
		ptr = (char *)malloc(sizeof(char) * (find_size(num, base_to) + 2));
		*ptr = '-';
		base_res(num, base_to, ptr, 1);
		ptr[find_size(num, base_to) + 1] = '\0';
	}
	else
	{
		ptr = (char *)malloc(sizeof(char) * find_size(num, base_to) + 1);
		base_res(num, base_to, ptr, 0);
		ptr[find_size(num, base_to)] = '\0';
	}
	return (ptr);
}

void	swap(char *ptr, int cnt, int i, int flag)
{
	char	tmp;

	while (i <= cnt / 2 - flag)
	{
		tmp = ptr[i];
		if (flag)
		{
			ptr[i] = ptr[cnt - 1 - i];
			ptr[cnt - 1 - i] = tmp;
		}
		else
		{
			ptr[i] = ptr[cnt - i];
			ptr[cnt - i] = tmp;
		}
		i++;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			cnt;
	char		*ptr;
	long long	num;

	if (check_exception(base_from) || check_exception(base_to))
		return (0);
	num = ft_convert_base2(nbr, base_from);
	if (num == 0)
	{
		ptr = (char *)malloc(sizeof(char) * 2);
		base_res((long long) num, base_to, ptr, 0);
		ptr[1] = '\0';
	}
	else
		ptr = make_ptr(num, base_to);
	cnt = 0;
	while (ptr[cnt])
		cnt++;
	if (num < 0)
		swap(ptr, cnt, 1, 0);
	else
		swap(ptr, cnt, 0, 1);
	return (ptr);
}
