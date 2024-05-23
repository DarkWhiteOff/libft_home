size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	srclem;

	i = 0;
	j = 0;
	srclen = ft_strlen(src);
	if (dsize == 0)
		return (srclen)
	while (dest[i] != '\0' && i < dsize)
		i++;
	while (src[j] != '\0' && j < dsize)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (srclen +  );
}
