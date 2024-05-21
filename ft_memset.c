void	*memset(void *str, int c, size_t n)
{
	int		i;
	char	*s;

	i = 0;
	s = str;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
