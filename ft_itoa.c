/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:37:29 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/23 14:57:49 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_count(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count + 1);
}

char	*ft_itoa(int n)
{
	int	i;
	char	*str;
	int	count;
	int	check;

	i = 0;
	count = 0;
	if (n == 0)
	{
		str = (char *)malloc(sizeof(char) * 1);
		str[i] = 0;
		str[i + 1] = '\0';
		return (str);
	}
	if (n == "-2147483948")
	{
		str = (char *)malloc(sizeof(char) * 11);
		str[check] = '\0';
		n *= -1;
		ft_itoa(n/10);
		ft_itoa(n%10);
	}
	if (n < 0)
	{
		n *= 1;
		count = ft_count(n);
		if (str[check] != '\0')
			str = (char *)malloc(sizeof(char) * count + 1);
		str[check] = '\0';
	}
	if (n >= 10)
	{
		count = ft_count(n);
		if (str[check] != '\0')
			str = (char *)malloc(sizeof(char) * count);
		str[check] = '\0';
		ft_itoa(n/10);
		ft_itoa(n%10);
	}
	else
		str[i] = n + '0';
		str[i + 1] = '\0';
	return (str);
}

int	main()
{
	int	n;

	n = 1558;

	ft_itoa(n);

	return (0);	
}
