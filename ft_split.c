/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:46:59 by zamgar            #+#    #+#             */
/*   Updated: 2024/06/05 14:32:06 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

unsigned int	ft_count_double_array(char const *s, char c)
{
	int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	if (!s[0])
		return (0);
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
		if (s[i] != '\0')
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
	return (NULL);
}

void	ft_count_simple_array(char const *s, char c, unsigned int *temp, unsigned int *temp2)
{
	*temp = 0;
	while (s[*temp2] != '\0' && s[*temp2] == c)
		(*temp2)++;
	while (s[*temp2] != '\0' && s[*temp2] != c)
	{
		(*temp)++;
		(*temp2)++;
	}
}

void	ft_fill_array(char *array, char const *s, char c, unsigned int *temp2)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	i = *temp2;
	i = i -1;
	while (s[i] != s[0] && s[i] != c)
		i--;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (i < *temp2)
	{
		array[z] = s[i];
		z++;
		i++;
	}
	array[z] = '\0';
}

char	**ft_split(char const *s, char c)
{
	unsigned int     i;
	unsigned int	count;
	unsigned int	temp;
	unsigned int	temp2;
	char    **array;

	i = 0;
	temp = 0;
	temp2 = 0;
	if (!s)
		return (NULL);
	count = ft_count_double_array(s, c);
	array = (char **)malloc(sizeof(char *) * (count + 1));
	if (array == NULL)
		return (NULL);
	while (i < count)
	{
		ft_count_simple_array(s, c, &temp, &temp2);
		array[i] = (char *)malloc(sizeof(char) * temp + 1);
		if (array[i] == NULL)
			return (ft_free(array, i));
		ft_fill_array(array[i], s, c, &temp2);
		i++;
	}
	array[i] = NULL;
	return (array);
}

/*int     main()
{
        char    *s = 0;
	char	c = 0;

	char *invalidReadCheck; 
	*invalidReadCheck = 0;

	char	**array;

	array = ft_split(s, c);
	printf("%s\n", array[0]);
	printf("%s\n", array[1]);
	printf("%s\n", array[2]);
	printf("%s\n", array[3]);
	printf("%s\n", array[4]);
	printf("%s\n", array[5]);
	if (array[1] == NULL)
		printf("%s", array[1]);
	if (array[2] == NULL)
		printf("%s", array[2]);
	if (array[3] == NULL)
                printf("%s", array[3]);
	if (array[4] == NULL)
                printf("%s", array[4]);
	if (array[5] == NULL)
                printf("%s", array[5]);
	if (array[6] == NULL)
                printf("%s", array[6]);
	if (array[7] == NULL)
                printf("%s", array[7]);
	if (array[8] == NULL)
                printf("%s", array[8]);
	return (0);
}*/
