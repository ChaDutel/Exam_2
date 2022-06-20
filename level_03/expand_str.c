#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		i++;
	w = i;
	while (argv[1][w])
			w++;
	while (argv[1][w] == ' ' || argv[1][w] == '\t')
		w--;
	j = i + 1;
	//while (argv[1][i] && argv[1][j])
	while (j < w)
	{
		j = i + 1;
		if (argv[1][i] != ' ' || argv[1][i] != '\t')
			write(1, &argv[1][i], 1);
		if (argv[1][j] == ' ' || argv[1][j] == '\t')
			i++;
		if (argv[1][j] != '\0' && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		{
			write(1, "   ", 3);
		}
		i++;
	}
	return (0);
}
