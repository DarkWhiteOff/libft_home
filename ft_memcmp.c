int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*ss1;
	char	*ss2;

	i = 0;
	ss1 = s1;
	ss2 = s2;
	while (ss1[i] == ss2[i] && ss1[i] != '\0' && ss2[i] = '\0' && i < n)
		i++;
	return (ss1[i] - ss2[i]);
}
