#include <unistd.h>

int	cnt_digits(int nb)
{
	int	cnt;

	cnt = 0;
	while (nb != 0)
	{
		nb /= 10;
		cnt++;
	}
	return (cnt);
}

int	find_first_div(int nb)
{
	int	i;
	int	res;
	int	digits;

	i = 0;
	res = 1;
	digits = cnt_digits(nb) - 1;
	while (i < digits)
	{
		res *= 10;
		i++;
	}
	return (res);
}

void	print(char c)
{
	write(1, &c, 1);
}

void	print_num(int nb)
{
	int		div;
	char	for_print;

	if (nb < 0)
	{
		nb *= -1;
		print('-');
	}
	div = find_first_div(nb);
	while (div != 0)
	{
		for_print = '0' + nb / div;
		print(for_print);
		nb %= div;
		div /= 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		print_num(nb);
	}
}	
