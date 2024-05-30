/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:43:08 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/30 14:49:45 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	return (dest);
}

int	main(void)
{
	unsigned char	dest[50];
	unsigned char	src[40] = "lorem ipum dolor sit a";

	printf("%s", (unsigned char *)ft_memmove(dest, src, 31));
	return (0);
}
