/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjkim <jinjkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:45:58 by jinjkim           #+#    #+#             */
/*   Updated: 2022/01/08 20:41:13 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	g_x;
int	g_y;

void	first_and_last_row(int y)
{
	int	i;

	i = 0;
	while (i < g_x)
	{
		if ((i == 0 || i == g_x - 1) && (y == 0 || y == g_y - 1))
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
}

void	middle_row(void)
{
	int	i;

	i = 0;
	while (i < g_x)
	{
		if (i == 0 || i == g_x - 1)
		{
			ft_putchar('|');
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
			first_and_last_row(i);
		}
		else
		{
			middle_row();
		}
		ft_putchar('\n');
		i++;
	}
}
