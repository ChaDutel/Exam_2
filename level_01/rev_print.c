#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][j])
	{
		j++;
	}
	j--;
	while (j != -1)
	{
		write(1, &argv[1][j], 1);
		j--;
	}
	return (0);
}
