/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:17:54 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/30 16:09:15 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
        size_t  i;

        i = 0;
        while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
                i++;
        return (s1[i] - s2[i]);
}

int     main()
{
        //const char s1[20] = "abcdefgh";
        //const char s2[20] = "abcdwxyz";

        printf("%d", ft_strncmp("test", "testss", 7));
	return (0);
}
