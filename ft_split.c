#include <stdlib.h>
#include <stdio.h>

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
		while (s[i] != c)
			count++;
		i += count;
		count = 0;
		i++;
		j++;
	}
	array = (char **)malloc(sizeof(char *) * j);
	array1count = j;
	// malloc des simple array
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c)
			count++;
		array[j] = (char *)malloc(sizeof(char) * (count + 1));
		i += count;
		count = 0;
		i++;
	}
	i = 0;
	j = 0;
	count = 0;
	while (i != array1count)
	{
		while (s[count] != c)
		{
			array[i][z] = s[count];
			count++;
			z++;
		}
		array[i][z] = '\0';
		count = 0;
		z = 0;
		i++;
	}
	return (array);
}

int	main()
{
	char	s[25] = "aaaaa/aaaaa/aaaaa/aaaaa";
	char	c = '/';
	char	**array;
	int	i;
	int	j;

	i = 0;
	j = 0;
	array = ft_split(s, c);
	while (i != 4)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
