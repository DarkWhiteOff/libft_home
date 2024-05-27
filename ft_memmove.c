/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:43:08 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/27 19:25:16 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;
	char	*temp;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	temp = s;
	while (s[i] != '\0' && i < n)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while (temp[i] != '\0' && i < n)
	{
		d[i] = temp[i];
		i++;
	}
	return (d);
}

/*int	main(void)
{
	char	src[50] = "Bonjour";
	char	dest[50];

	printf("%s", (char *)ft_memmove(dest, src, 7));
	return (0);
}*/
