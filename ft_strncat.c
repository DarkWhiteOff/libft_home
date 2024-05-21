char	ft_strcat(char *dest, char *src, int n)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	j = 0;
	z = n;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
		z--;
	}
	while (n != 0)
	{
		dest[i] = '\0'
		n--;
	}
	return (dest);
}
