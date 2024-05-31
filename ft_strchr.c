/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:35:37 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/31 13:25:07 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ftft_strlen(const char *s, size_t c)
{
	size_t	i;

	i = 0;
	if (c != '\0')
	{
		while ((char)s[i] != '\0')
			i++;
	}
	if (c == '\0')
	{
		while ((char)s[i])
		{
			if (s[i + 1] == '\0')
				i++;
			i++;
		}
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s[0] == '\0' && c == '\0')
		return ((char *)&s[i]);
	while ((char *)s && i < ftft_strlen(s, (size_t)c))
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

/*int	main()
{
	char	s[1] = "";

	printf("%s", ft_strchr(s, '\0')); 
	return (0);
}*/
