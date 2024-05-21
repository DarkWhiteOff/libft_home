void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = s;
	while (str[i] != '\0' && n > 0)
	{
		if (str[i] == c)
			return (str[i]);
		i++;
		n--;
	}
	return (0);
}
