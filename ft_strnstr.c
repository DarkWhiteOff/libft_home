/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:25:42 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/27 18:38:24 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strnstr(const char *str, const char *tofind, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (tofind[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		while (tofind[j] == str[i + j])
		{
			if (tofind[j + 1] == '\0')
			{
				return ((char *)&str[i]);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

/*int     main(void)
{
        char    *str = "Salut comment ca va ?";
        char    *tofind = "c";
        printf("%s", ft_strnstr(str, tofind, 15));
        return (0);
}*/
