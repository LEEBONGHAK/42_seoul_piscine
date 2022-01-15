/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:57:52 by bolee             #+#    #+#             */
/*   Updated: 2022/01/09 16:38:48 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	g_x;
int	g_y;

void	first_end(int y)
{
	int	i;

	i = 0;
	while (i < g_x)
	{
		if ((i == 0 && y == 0) || (i == g_x - 1 && y == g_y - 1))
		{
			ft_putchar('A');
		}
		else if ((i == g_x - 1 && y == 0) || (i == 0 && y == g_y - 1))
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

void	middle(void)
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

	g_x = x;
	g_y = y;
	i = 0;
	while (i < g_y)
	{
		if (i == 0 || i == g_y - 1)
		{
			first_end(i);
		}
		else
		{
			middle();
		}
		ft_putchar('\n');
		i++;
	}
}
