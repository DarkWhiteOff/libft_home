/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:35:42 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/22 17:29:50 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_set_check(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return(0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;
	char	*newstr;

	i = 0;
	j = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		if (ft_set_check(set, s1[i]) == 1)
			count++;
		i++;
	}
	newstr = (char *)malloc(sizeof(char) * count);
	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_set_check(set, s1[i]) == 1)
		{
			newstr[j] = s1[i];
			j++;
		}
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/*int	main()
{
	char	s1[50] = "Bon.jour/Je[MalppelleZi+ggy";
	char	set[50] = "./[+l";

	printf("%s", ft_strtrim(s1, set));
	return (0);
}*/
