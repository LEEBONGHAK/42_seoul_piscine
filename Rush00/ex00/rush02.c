/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:49:56 by bolee             #+#    #+#             */
/*   Updated: 2022/01/08 20:43:45 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	g_x;
int	g_y;

void	print_with_no_blank(int y)
{
	int	i;

	i = 0;
	while (i < g_x)
	{
		if ((i == 0 || i == g_x - 1) && y == 0)
		{
			ft_putchar('A');
		}
		else if ((i == 0 || i == g_x - 1) && y == g_y - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
}

void	print_with_blank(void)
{
	int	i;

	i = 0;
	while (i < g_x)
	{
		if (i == 0 || i == g_x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	g_x = x;
	g_y = y;
	while (i < g_y)
	{
		if (i == 0 || i == g_y - 1)
		{
			print_with_no_blank(i);
		}
		else
		{
			print_with_blank();
		}
		ft_putchar('\n');
		i++;
	}
}
