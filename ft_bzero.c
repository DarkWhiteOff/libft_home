void	ft_bzero(void *str, size_t n)
{
	int		i;
	char	*s;

	i = 0;
	s = str;
	while (i < n)
	{
		s[i] = 0;
		i++;
	}
}
