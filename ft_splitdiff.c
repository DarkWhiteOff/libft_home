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
#include <stdio.h>

int	ft_count_double_array(char **array, char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_free(char **array, int i)
{
	while (i > 0)
	{
		free(array[i]);
		i--;
	}
	free(array);
	return (0);
}

int	ft_count_simple_array(char **array, char *s, char c, int *temp)
{
	int	i;
	int	count;

	i = *temp;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		count++;
		i++;
	}
	*temp = i;
	return (count);
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
	int	count;
	int	count2;
	int	temp;

	i = 0;
	temp = 0;
	count = ft_count_double_array(array, (char *)s, c);
	array = (char **)malloc(sizeof(char *) * count + 1);
	if (array == NULL || s == NULL)
		return (NULL);
	while (i < count)
	{
		count2 = ft_count_simple_array(array, (char *)s, c, &temp);
		array[i] = (char *)malloc(sizeof(char) * count2 + 1);
		if (array[i] == NULL)
			return(ft_free(array, i));	
		i++;
	}
	ft_fill_array(array, (char *)s, c);
	array[i] = NULL;
	return (array);
}

int	main()
{
	char	s[22] = "_UNDEUXTROIS";

	char	c = '_';
	char	**array;
	int	i;

	i = 0;
	array = ft_split(s, c);

	while (i != 12)
	{
		printf("%s\n", array[i]);
		i++;
	}
	return (0);
}
