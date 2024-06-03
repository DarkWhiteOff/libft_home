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
	int	nmembb;
	int	sizee;
	void	*t;
	unsigned char *tt;

	i = 0;
	nmembb = (int)nmemb;
	sizee = (int)size;
	if ((nmembb < 0 && sizee != 0) || (sizee < 0 && nmembb != 0))
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	tt = (unsigned char *)t;
	while (i < (nmemb * size))
	{
		tt[i] = '\0';
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
