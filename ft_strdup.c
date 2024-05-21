#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	i = 0;
	while (s != '\0')
		i++;
	dest = (char *)malloc(sizeof(char) * i);
	i = 0;
	while (s != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
