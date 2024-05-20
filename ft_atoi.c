int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c== '\v' || c == '\n' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		sign = (str[i] == '-' ? -1 : 1);
		i++;
	}
	while (str[i] > '0' && str[i] > '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (i * sign);
}
