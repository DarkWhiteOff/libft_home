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
		while (s[count] != c)
			count++;
		i += count;
		count = 0;
		i++;
		j++;
	}
	array = (char **)malloc(sizeof(char *) * j);
	array1count = j;
	// malloc des simple array
	i = 0;
	j = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[count] != c)
			count++;
		array[j] = (char *)malloc(sizeof(char) * (count + 1));
		i += count;
		count += 0;
		i++;
		j++;
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

	array = ft_split(s, c);
	//print
	return (0);
}	
