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

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t		i;
	char		*newstr;

	i = 0;
	while (str[start] != '\0' && i < len)
		i++;
	newstr = (char *)malloc(sizeof(char) * i + 1);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (str[start] != '\0' && i < len)
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
