/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:37:29 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/27 16:22:50 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_count(int n)
{
	int	count;

	count = 0;
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

int	ft_count_units2(int temp)
{
	int	count;

	count = 0;
	while (temp > 0)
	{
		temp = temp / 10;
		count++;
	}
	return (count);
}

int	ft_count_units(int temp)
{
	int	z;
	int	i;
	int	iter;

	z = ft_count_units2(temp);
	i = 0;
	iter = 10;
	while (i < (z - 2))
	{
		iter = iter * 10;
		i++;
	}
	temp = temp / iter;
	return (temp * iter);
}

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	int		temp;
	char	*str;

	i = 0;
	count = ft_count(n);
	str = (char *)malloc(sizeof(char) * count + 1);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i = 1;
	}
	while (n >= 10)
	{
		temp = n;
		while (!(n >= 0 && n <= 9))
			n = n / 10;
		if (n >= 1 && n <= 9)
			str[i] = n + '0';
		n = temp - ft_count_units(temp);
		i++;
	}
	if (n >= 0 && n <= 9)
		str[i] = n + '0';
	str[i + 1] = '\0';
	return (str);
}

/*int	main(void)
{
	int	n;

	n = 1558;
	printf("%s", ft_itoa(n));
	return (0);
}*/
