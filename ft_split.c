/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:46:59 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/28 16:55:22 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	**ft_malloc_double_array(char **array, char *s, char c, int *array1count)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
			(*array1count)++;
		}
		i++;
	}
	array = (char **)malloc(sizeof(char *) * (*array1count) + 1);
	return (array);
}

void	ft_free(char **array, int i)
{
	while (i > 0)
	{
		free(array[i]);
		i--;
	}
	free(array);
}

void	ft_malloc_simple_array(char **array, char *s, char c, int *array1count)
{
	int	i;
	int	count;
	int	z;

	i = 0;
	count = 0;
	z = 0;
	while (s[i] != '\0' && z < *array1count)
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				count++;
				i++;
			}
			array[z] = (char *)malloc(sizeof(char) * count + 1);
			if (array[z] == NULL)
				ft_free(array, z);
			count = 0;
			z++;
		}
		i++;
	}
}

void	ft_fill_array(char **array, char *s, char c)
{
	int	i;
	int	z;
	int	j;

	i = 0;
	z = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				array[z][j] = s[i];
				i++;
				j++;
			}
			array[z][j] = '\0';
			j = 0;
			z++;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int	i;
	char		**array;
	int	array1count;

	i = 0;
	array1count = 0;
	array = ft_malloc_double_array(array, (char *)s, c, &array1count);
	if (array == NULL)
		return (NULL);
	ft_malloc_simple_array(array, (char *)s, c, &array1count);
	/*while (i < array1count)
	{
		if (array[i] == NULL)
			return (NULL);
		i++;
	}*/
	// remplissage des array
	ft_fill_array(array, (char *)s, c);
	// dernier **array en NULL
	//array[i] = 0;
	return (array);
}

/*int	main()
{
	char	s[50] = "UN_DEUX_TROIS";
	char	c = '_';
	char	**array;
	int	i;
	int	j;
	char	n = '\n';

	i = 0;
	j = 0;
	array = ft_split(s, c);

	while (i < )
	{
		printf("%s\n", array[i]);
		i++;
	}
	return (0);
}*/
