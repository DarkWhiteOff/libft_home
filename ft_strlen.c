unsigned int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s != '\0')
		i++;
	return (i);
}
