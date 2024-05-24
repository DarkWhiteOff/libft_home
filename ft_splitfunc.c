/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitfunc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:46:59 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/24 15:47:03 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	**ft_malloc_double_array(char **array, char *s, char c, int *array1count)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
		j++;
		(*array1count)++;
	}
	array = (char **)malloc(sizeof(char *) * j + 1);
	if (array == NULL)
		return (NULL);
	return (array);
}

void	ft_malloc_simple_array(char **array, char *s, char c)
{
	int	i;
	int	count;
	int	j;

	i = 0;
	j = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
		{
			count++;
			i++;
		}
		while (s[i] == c && s[i] != '\0')
			i++;
		array[j] = (char *)malloc(sizeof(char) * (count + 1));
		count = 0;
		j++;
	}
}

void	ft_fill_array(char **array, char *s, char c, int *array1count)
{
	int	i;
	int	count;
	int	z;

	i = 0;
	count = 0;
	z = 0;
	while (i != *array1count)
	{
		while (s[count] != c && s[count] != '\0')
		{
			array[i][z] = s[count];
			count++;
			z++;
		}
		array[i][z] = '\0';
		while (s[count] == c && s[count] != '\0')
			count++;
		z = 0;
		i++;
	}
}

char **ft_split(char const *s, char c)
{
	int	i;
	char	**array;
	int	array1count;

	i = 0;
	array1count = 0;
	// malloc du double array
	array = ft_malloc_double_array(array, (char *)s, c, &array1count);
	if (array == NULL)
		return (NULL);
	// malloc des simple array
	ft_malloc_simple_array(array, (char *)s, c);
	while (i < array1count)
	{
		if (array[i] == NULL)
			return (NULL);
		i++;
	}
	// remplissage des array
	ft_fill_array(array, (char *)s, c, &array1count);
	// dernier **array en NULL
	array[i] = NULL;
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
	while (i < 8)
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
