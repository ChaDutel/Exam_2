#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	w;
	static char line[1000] = {0};

	i = 0;
	w = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		i++;
	while (argv[1][i])
	{
		if ((argv[1][i] == ' ' && argv[1][i + 1] == ' ') || argv[1][i] == '\t')
			i++;
		line[w] = argv[1][i];
		w++;
		line[w] = ' ';
		i++;
	}
	while (line[w] == '\t' || line[w] == ' ')
	{
		line[w] = '\0';
		w--;
	}
	w = 0;
	while(line[w])
	{
		write(1, &line[w], 1);
		w++;
	}
	return (0);
}
