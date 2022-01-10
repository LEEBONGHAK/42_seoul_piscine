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

int	ft_atoi(char *str)
{
	int	flag;
	int	res;
	int	sign;

	flag = 0;
	res = 0;
	sign = 1;
	if (*str != ' ')
	{
		return (0);
	}
	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		res = find_res(res, str);
		if (flags(str + 1) == flag + 1)
			flag++;
		else if (flags(str + 1) == 999)
			break ;
		str++;
	}
	return (sign * res);
}

int	check_exception(char *base)
{
	int	i;
	int	j;
	int	size;

	size = 0;
	while (base[size] != '\0')
	{
		size++;
	}
	i = 0;
	if (size == 0 || size == 1)
		return (1);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
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

int	ft_atoi_base(char *str, char *base)
{
	if (check_exception(base))
		return (0);
	return (ft_atoi(str));
}
