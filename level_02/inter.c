#include <unistd.h>

char	ft_tab_cmp_add(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i] && str[i] != c)
			i++;
	if (str[i] == c)
			return (0);
	str[i] = c;
	return (c);
}

int	main(int argc, char **argv)
{
	int			i;
	int			j;
	char		letter;
	char		str[1000] = {0};

	i = 0;
	j = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][i])
	{
		j = 0;
		while(argv[2][j] && argv[1][i] != argv[2][j])
			j++;
		if(argv[1][i] && argv[2][j] && argv[1][i] == argv[2][j])
		{
			letter = ft_tab_cmp_add(str, argv[1][i]);
			if(letter != 0)
				write(1, &letter, 1);
		}
			//j++;
		i++;
	}
	/*while (argv[2][j]) //&& argv[1][i])
	{
		i = 0;
		while (argv[1][i] && argv[1][i] != argv[2][j])
			i++;
		if (argv[1][i] == argv[2][j])
		{
			letter = ft_tab_cmp_add(str, argv[1][i]);
			write(1, &letter, 1);
		}
		j++;
	}*/
	write(1, "\n", 1);
	return (0);
}
