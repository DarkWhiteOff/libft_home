void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = (char *)f(i, s[i]);
		i++;
	}
}
