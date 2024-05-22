/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:54:37 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/22 16:02:10 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen((char *)src);
	if (dsize == 0)
		return (srclen);
	while (src[i] != '\0' && i < dsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

/*int	main()
{
	char	src[50] = "Bonjour";
	char	dst[50];
	
	printf("%s\n", dst);
	printf ("%zu\n", ft_strlcpy(dst, src, 7));
	printf("%s\n", dst);
	return (0);
}*/
