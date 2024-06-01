/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:43:08 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/31 14:34:41 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*s;
	unsigned char	*d;
	unsigned char	*temp;

	i = 0;
	s = (unsigned char *)(src);
	d = (unsigned char *)(dest);
	temp = s;
	while (i < n)
	{
		d[i] = temp[i];
		i++;
	}
	return (d);
}

/*int	main(void)
{
	char	dest[50];
	char	src[40] = "lorem ipum dolor sit a";

	printf("%s\n\n", (char *)ft_memmove(dest, src, 8));
	printf("%s\n", (char *)memmove(dest, src, 8));
	return (0);
}*/
