#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char **ft_split(char const *s, char c)
{
	int	i;
	int	count;
	int	j;
	int	z;
	char	**array;
	int	array1count;

	i = 0;
	count = 0;
	j = 0;
	z = 0;
	array1count = 0;
	// malloc du double array
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i + 1] != '\0')
			i++;
		j++;
	}
	array = (char **)malloc(sizeof(char *) * j + 1);
	if (array == NULL)
		return (NULL);
	array1count = j;
	i = 0;
	j = 0;
	// malloc des simple array
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
		{
			count++;
			i++;
		}
		array[j] = (char *)malloc(sizeof(char) * (count + 1));
		if (array[j] == NULL)
			return (NULL);
		count = 0;
		if (s[i + 1] != '\0')
			i++;
		j++;
	}
	i = 0;
	j = 0;
	count = 0;
	while (i != array1count)
	{
		while (s[count] != c && s[count] != '\0')
		{
			array[i][z] = s[count];
			count++;
			z++;
		}
		array[i][z] = '\0';
		z = 0;
		i++;
		if (s[count + 1] != '\0')
			count++;
	}
	array[array1count + 1] = NULL;
	return (array);
}

int	main()
{
	char	s[30] = "aa/aaa/aa/aaa/aa/aaa/aa/aaa";
	char	c = '/';
	char	**array;
	int	i;
	int	j;
	char	n = '\n';

	i = 0;
	j = 0;
	array = ft_split(s, c);
	while (i != 8)
	{
		while (array[i][j] != '\0')
		{
			write(1, &array[i][j], 1);
			j++;
		}
		write(1, &n, 1);
		j = 0;
		i++;
	}
	return (0);
}
