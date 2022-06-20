#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') || (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
		{
			j = 0;
			while(argv[1][i] != 'm' && argv[1][i] != 'M')
			{
				argv[1][i] += 1;
			//	write(1, &argv[1][i], 1);
				j++;
			}
			j++;
			argv[1][i] += j;
		}
		else if ((argv[1][i] >= 'n' && argv[1][i] <= 'z') || (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
		{
			j = 0;
			while(argv[1][i] != 'n' && argv[1][i] != 'N')
			{
				argv[1][i] -= 1;
				j++;
			}
			j++;
			argv[1][i] -= j;
		}
		write(1, &argv[1][i], 1);
		i++;	
	}
	return (0);
}
