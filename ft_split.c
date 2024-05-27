/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:46:59 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/27 19:11:33 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_malloc_double_array(char **array, char *s, char c, int *array1count)
{
	int	i;
	int	j;
	int 	temp;

	i = 0;
	j = 0;
	temp = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
		temp = i;
		i--;
		while (s[i] == c && i != 0)
			i--;
		if (s[i] != c)
		{
			j++;
			(*array1count)++;
		}
		i = temp;
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
	int	temp;

	i = 0;
	j = 0;
	count = 0;
	temp = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
		{
			count++;
			i++;
		}
		while (s[i] == c && s[i] != '\0')
			i++;
		temp = i;
		i--;
		while (s[i] == c && i != 0)
			i--;
		i = temp;
		if (s[i] != c && count != 0)
		{
			array[j] = (char *)malloc(sizeof(char) * (count + 1));
			j++;
		}
		count = 0;
	}
}

void	ft_fill_array(char **array, char *s, char c, int *array1count)
{
	int	i;
	int	count;
	int	z;
	int	temp;

	i = 0;
	count = 0;
	z = 0;
	temp = 0;
	while (i != *array1count)
	{
		while (s[count] != c && s[count] != '\0')
		{
			array[i][z] = s[count];
			count++;
			z++;
		}
		while (s[count] == c && s[count] != '\0')
			count++;
		temp = count;
		count--;
		while (s[count] == c && count != 0)
			count--;
		count = temp;
		if (s[count] != c && z != '\0')
		{
			array[i][z] = '\0';
			i++;
		}
		z = 0;
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
	//array[i] = NULL;
	return (array);
}

int	main()
{
	char	s[50] = "__Bonjour__je______mappelle_caca____";
	char	c = '_';
	char	**array;
	int	i;
	int	j;
	char	n = '\n';

	i = 0;
	j = 0;
	array = ft_split(s, c);
	while (array != NULL)
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
