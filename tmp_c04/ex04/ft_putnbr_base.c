#include <unistd.h>
#include <stdio.h>

int	g_nbr;

void	print(char c)
{
	write(1, &c, 1);
}

int	base_size(char *base)
{
	int	cnt;

	cnt = 0;
	while (*base)
	{
		base++;
		cnt++;
	}
	return (cnt);
}

int	check_exception(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base_size(base) == 0 || base_size(base) == 1)
		return (1);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	base_res(char *base)
{
	int	size;
	int	div;
	int	mod;

	if (g_nbr == 0)
		return ;
	size = base_size(base);
	div = g_nbr / size;
	mod = g_nbr % size;
	if (div >= size)
	{
		g_nbr = div;
		base_res(base);
	}
	else
		print(base[div]);
	print(base[mod]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	g_nbr = nbr;
	if (check_exception(base))
		return ;
	if (g_nbr < 0)
	{
		print('-');
		g_nbr *= -1;
	}
	base_res(base);
}
