void	ft_revstr.c(char *str)
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
		str[z] = str[i];
		i++;
		z--;
	}	
}
