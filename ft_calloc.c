/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:15:32 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/27 16:05:52 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*t;

	i = 0;
	if (nmemb == 0 || soze == 0)
		return (NULL);
	t = i(char)malloc(sizeof(size) * nmemb);
	if (t == NULL)
		return (NULL);
	while (i < nmemb)
	{
		t[i] = '\0';
		i++;
	}
	return (t);
}
