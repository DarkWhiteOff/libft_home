#include <stdlib.h>

char	ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src != '\0')
		i++;
	dest = (char *)malloc(sizeof(char) * i);
	i = 0;
	while (src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
