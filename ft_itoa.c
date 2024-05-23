/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamgar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:37:29 by zamgar            #+#    #+#             */
/*   Updated: 2024/05/23 13:02:22 by zamgar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_putstr_in_string(char *str, char *strbase)
{
	
}

char	*ft_putc_in_string(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = c;
	}
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	char	c;
	
	if (n == 0)
	{
		str = (char *)malloc(sizeof(char) * 1);
		if (str == NULL)
			return (NULL)
		ft_putc_in_string(str, '0');
		return (str);
	}
	if (n == -2147483648)
	{
		str = (char *)malloc(sizeof(char) * 11);
		if (str == NULL)
			return (NULL)
		str = "-2147483648";
		return (str);
	}
	if (n < 0)
	{
		n *= -1;
		while (n != 0)
		{
			c = c + (n / 10) + '0';
		}
	}

	return (str);
}

int	main()
{
	int	n;

	n = ;

	ft_itoa(n);

	return (0);	
}
