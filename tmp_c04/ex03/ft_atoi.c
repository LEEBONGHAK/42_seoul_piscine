int	flags(char *str)
{
	if (*str == ' ')
	{
		return (0);
	}
	else if (*str == '-' || *str == '+')
	{
		return (1);
	}
	else if (*str >= '0' && *str <= '9')
	{
		return (2);
	}
	return (999);
}

int	check_sign(char *str)
{
	if (*str == '-')
	{
		return (1);
	}
	return (0);
}

int	find_res(int res, char *str)
{
	if (res == 0 && *str >= '0' && *str <= '9')
		res += *str - 48;
	else if (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += *str - 48;
	}
	return (res);
}

int	positive_negative(int res, int sign)
{
	if (sign % 2 == 1)
	{
		res *= -1;
		return (res);
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	flag;
	int	sign;
	int	res;

	flag = 0;
	sign = 0;
	res = 0;
	if (*str != ' ')
	{
		return (0);
	}
	while (*str)
	{
		sign += check_sign(str);
		res = find_res(res, str);
		if (flags(str + 1) == flag + 1)
			flag++;
		else if (flags(str + 1) == 999)
			break ;
		str++;
	}
	return (positive_negative(res, sign));
}
