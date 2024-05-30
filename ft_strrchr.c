/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:48:53 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/30 18:47:39 by zamgar           ###   ########.fr       */
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

int	ft_check_other_c(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s[i] == '\0' && c != '\0')
		return (0);
	while ((char *)s && i < ft_strlen(s))
	{
		if (s[i] == c)
		{
			if (ft_check_other_c((char *)&s[i + 1], c) == 0)
				return ((char *)&s[i]);
		}
		i++;
	}
	return (0);
}

/*int	main()
{
	char	s[30] = "okcokcccokokcaaaaaa";

	printf("%s", ft_strrchr(s, 'c'));
	return(0);
}*/
