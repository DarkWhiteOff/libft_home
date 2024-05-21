char	*ft_revstr(char *str)
{
	int		i;
	int		z;
	char	temp;

	i = 0;
	z = 0;
	while (str[z] != '\0')
		z++;
	while (i < z / 2)
	{
		temp = str[i];
		str[i] = str[z];
		str[z] = temp;
		z--;
		i++;
	}
	return (str);
}

char	*strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	ft_revstr(s);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s[i]);
	}
	return (0);
}
