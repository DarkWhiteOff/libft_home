#include <stdlib.h>

char	ft_strndup(char *src, int n)
{
	int		i;
	char	*dest;

	i = 0;
	while (src != '\0' && i < n)
		i++;
	dest = (char *)malloc(sizeof(char) * i);
	i = 0;
	while (src != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
