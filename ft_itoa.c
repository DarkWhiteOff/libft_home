/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:37:29 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/28 16:30:27 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

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

int	ft_count_units(int temp)
{
	int	z;
	int	i;
	int	iter;

	i = 0;
	iter = 10;
	z = ft_count(temp);
	while (i < (z - 2))
	{
		iter = iter * 10;
		i++;
	}
	temp = temp / iter;
	return (temp * iter);
}

char	*ft_min_and_little(char *str, int i, int n)
{
	if (i > 0 || (n >= 1 && n <= 9))
	{
		str[i] = n + '0';
		str[i + 1] = '\0';
		return (str);
	}
	else
	{
		str = "-2147483648";
		return ((char *)str);
	}
}

char	*ft_div(char *str, int *temp, int n, int i)
{
	*temp = n;
	while (!(n >= 0 && n <= 9))
		n = n / 10;
	str[i] = n + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		temp;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_count(n) + 1);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n == -2147483648)
		return (ft_min_and_little(str, i, n));
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i = 1;
	}
	while (n >= 10)
	{
		ft_div(str, &temp, n, i++);
		n = temp - ft_count_units(temp);
	}
	ft_min_and_little(str, i, n);
	return (str);
}

/*int	main(void)
{
	int	n;

	n = 1558;
	printf("%s", ft_itoa(n));
	return (0);
}*/
