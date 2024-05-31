/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:40:14 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/31 17:19:08 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_set_check(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_beg(char const *str, char const *set)
{
	int	i;

	i = 0;
	while (ft_set_check(set, str[i]) == 0)
		i++;
	return (i);
}

int	ft_check_end(char const *str, char const *set)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (ft_set_check(set, str[i]) == 0)
	{
		z++;
		i--;
	}
	return (z);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		z;
	int		temp;
	int		checkb;
	int		checke;
	char	*newstr;

	i = ft_strlen(s1);
	checkb = ft_check_beg(s1, set);
	checke = ft_check_end(s1, set);
	newstr = (char *)malloc(sizeof(char) * (i - (checkb + checke)) + 1);
	z = 0;
	temp = checkb;
	while (z < i - (checkb + checke))
	{
		newstr[z] = s1[temp];
		z++;
		temp++;
	}
	newstr[z] = '\0';
	return (newstr);
}

/*int	main()
{
	char	*s1 = "lorem ipsum dolor sit amet";
	char	*set =  "tel";

	printf("%s", ft_strtrim(s1, set));
	return (0);
}*/
