/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:15:32 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/31 15:22:29 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*t;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(sizeof(size) * nmemb);
	if (t == NULL)
		return (NULL);
	while (i < nmemb)
	{
		t[i] = '\0';
		i++;
	}
	return (t);
}

/*int	main()
{
	size_t	nmemb;
	size_t	size;
	char	*t;
	char	*t2;
	int	i;

	nmemb = 4;
	size = sizeof(char);
	t = (char *)ft_calloc(nmemb, size);
	t2 = (char *)calloc(nmemb, size);

	while (i < nmemb)
	{
		t[i] = 'c';
		t2[i] = 'c';
		i++;
	}
	printf("%s\n\n", t);
	printf("%s\n", t2);
	return (0);
}*/
