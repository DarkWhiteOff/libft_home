#include <stdio.h>
#include <stdlib>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char	*newstr;

	i = 0;
	while (s[i] != '\0')
		i++;
	newstr = (char *)malloc(sizeof(char) * i);
	i = 0;
	while (s[i] != '\0')
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	return (newstr);
}
