#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	str[1000] = {0};

	i = 0;
	j = 0;
	k = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] && argv[2][j])
	{
		while (argv[2][j] && (argv[1][i] != argv[2][j]))
			j++;
		if (argv[1][i] == argv[2][j])
		{
			str[i] = argv[1][i];
			k++;
		}
		i++;
	}
	if (argv[1][i] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	if (i == k)
	{
		i = 0;
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
