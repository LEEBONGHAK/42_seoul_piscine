/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dohakim <dohakim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:07:33 by dohakim           #+#    #+#             */
/*   Updated: 2022/01/09 16:39:34 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	g_x;
int	g_y;

void	print_first_end(void)
{
	int	i;

	i = 0;
	while (i < g_x)
	{	
		if (i == 0)
		{	
			ft_putchar('A');
		}
		else if (i == g_x - 1 )
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

void	print_middle(void)
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
			print_first_end();
		}
		else
		{
			print_middle();
		}
		ft_putchar('\n');
		i++;
	}
}
