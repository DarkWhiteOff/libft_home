/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 10:41:39 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/31 14:55:12 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	n = n - 1;
	while (ss1[i] == ss2[i] && ss1[i] != '\0' && ss2[i] != '\0' && i < n)
		i++;
	return (ss1[i] - ss2[i]);
}

/*int	main()
{
	char	*ss1;
	char	*ss2;

	ss1 = "abcdefghij";
	ss2 = "abcdefgxyz";
	printf("%d\n", ft_memcmp(ss1, ss2, 17));
	return (0);
}**/
