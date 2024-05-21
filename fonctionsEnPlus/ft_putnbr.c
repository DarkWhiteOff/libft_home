#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int n)
{
	if (n == 0)
	{
		ft_putchar('0');
		return;
	}
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n/10);
		ft_putnbr(n % 10);
	}
	else
			ft_putchar(n + '0');
}
