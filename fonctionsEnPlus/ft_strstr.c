/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:32:19 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/22 15:34:28 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_cutfromhere(char *str, int i)
{
	int		z;
	char	*cutstr;

	z = 0;
	while (str[z] != '\0')
		z++;
	cutstr = (char *)malloc(sizeof(char) * (z - i));
	z = 0;
	while (str[i] != '\0')
	{
		cutstr[z] = str[i];
		i++;
		z++;
	}
	cutstr[z] = '\0';
	return (cutstr);
}

char	*ft_strstr(char *str, char *tofind)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (tofind[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (tofind[j] == str[i + j])
		{
			if (tofind[j + 1] == '\0')
			{
				return(ft_cutfromhere(str, i));
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*str = "Salut comment ca va ?";
	char	*tofind = "ca";
	printf("%s", ft_strstr(str, tofind));
	return (0);
}
