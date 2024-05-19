#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	sort_parms(int argc, char *argv[])
{
	int		i;
	char	*temp;

	i = 1;
	while (i < argc + 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
		i++;
	}	
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;

	sort_parms(argc, argv);
	while (i < argc + 1)
	{
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
