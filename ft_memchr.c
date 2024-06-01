/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:08:27 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/31 14:23:34 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ss;

	i = 0;
	ss = (char *)s;
	while (i < n)
	{
		if (ss[i] == c)
			return (&ss[i]);
		i++;
	}
	return (NULL);
}

/*int	main()
{
	//unsigned char	s[50] = "okcok";
	int	tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("%s\n\n", (char *)ft_memchr(tab, -1, 7));
	printf("%s\n", (char *)memchr(tab, -1, 7));
	return (0);
}*/
