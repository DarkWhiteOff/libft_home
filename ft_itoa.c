/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:37:29 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/30 18:05:18 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_min(char *str)
{
	str = "-2147483648";
	return ((char *)str);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = ft_count(n);
	str = (char *)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n == -2147483648)
		return (ft_min(str));
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[i] = '\0';
	while (n >= 10)
	{
		str[i - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	str[i - 1] = n + '0';
	return (str);
}

/*int	main(void)
{
	int	n;
	char	*res; 
	
	n = 2147483647;
	res = ft_itoa(n);
	printf("%s\n", res);
	return (0);
}*/
