unsigned int	ft_strlen(char *s, int n)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && i < n)
		i++;
	return (i);
}
