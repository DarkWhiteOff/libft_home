void	*memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*d;
	char	*s;

	i = 0;
	d = dest;
	s = src;
	while (s[i] != '\0' && n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
}
