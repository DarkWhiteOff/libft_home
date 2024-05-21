char	*ft_cutfromhere(char *str, int i)
{
	int		z;
	char	*cutstr;

	z = 0;
	while (str[z] != '\0')
		z++;
	cutstr = (char *)malloc(sizeof(char) * (z - i));
	z = 0;
	while (str[i] != '\0')
	{
		cutstr[z] = str[i];
		i++;
		z++;
	}
	cutstr[z] = '\0';
}

char	*ft_strstr(char *str, char *tofind)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*tofind[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (tofind[j] == str[i + j])
		{
			if (tofind[j + 1] == '\0')
			{
				return(ft_cutfromhere(str, i));
			}
			j++;
		}
		j = 0;
		i++:
	}
}

int	main(void)
{
	char	*str = "Salut comment ca va ?";
	char	*tofind = "c";
	ft_strstr(str, tofind)
	return (0);
}
