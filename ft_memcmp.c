/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:41:39 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/30 16:20:49 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (ss1[i] == ss2[i] && ss1[i] != '\0' && ss2[i] != '\0' && i < n)
		i++;
	return (ss1[i] - ss2[i]);
}

/*int	main()
{
	char	*ss1;
	char	*ss2;

	ss1 = "ABJ";
	ss2 = "ABC";
	printf("%d\n", ft_memcmp(ss1, ss2, 1));
	return (0);
}*/
