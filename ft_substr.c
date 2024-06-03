/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:14:40 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/30 17:16:06 by zamgar           ###   ########.fr       */
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

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t		i;
	size_t		strlen;
	char		*newstr;

	i = 0;
	strlen = ft_strlen(str);
	if (!str)
		return (NULL);
	if (len > strlen)
		newstr = (char *)malloc(sizeof(char) * strlen + 1);
	if (len <= strlen)
		newstr = (char *)malloc(sizeof(char) * len + 1);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (start < strlen && i < len)
	{
		newstr[i] = str[start];
		i++;
		start++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/*int     main(void)
{
        char    *str = "lorem ipsum dolor sit amet";
        printf("%s", ft_substr(str, 7, 10));
        return (0);
}*/
