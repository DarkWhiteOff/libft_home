/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:08:27 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/22 13:48:31 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;

	i = 0;
	ss = (unsigned char *)s;
	while (ss[i] != '\0' && i < n)
	{
		if (ss[i] == c)
			return (&ss[i]);
		i++;
	}
	return (NULL);
}

/*int	main()
{
	unsigned char	s[50] = "okcok";

	printf("%s", (char *)ft_memchr(s, 'c', 5));
	return (0);
}*/
