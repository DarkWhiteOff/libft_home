/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:15:32 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/28 16:26:56 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
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
