char	*(char *src, char *dest, int n)
{
	int	i;
	int	z;
	
	i = 0;
	z = n;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n != 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}
