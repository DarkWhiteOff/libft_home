/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:08:48 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/22 11:32:36 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (s[i] != '\0' && i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*int	main()
{
	char	dest[50];
	char	src[50] = "Bonjour";

	printf("%s", (char *)ft_memcpy(dest, src, 5));
	return (0);
}*/
