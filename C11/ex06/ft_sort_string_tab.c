/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:45:03 by bolee             #+#    #+#             */
/*   Updated: 2022/01/20 10:22:24 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cmp(char *a, char *b)
{
	while (*a == *b && *a)
	{
		a++;
		b++;
	}
	if (*a > *b)
		return (1);
	return (0);
}

void	swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = i;
		while (tab[j])
		{
			if (cmp(tab[i], tab[j]))
				swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
