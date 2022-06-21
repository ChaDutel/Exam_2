#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			j = str[i] - 96;
		else if (str[i]>= 'A' && str[i] <= 'Z')
			j = str[i]  -  64;
		else
			j = 1;
		while (j > 0)
		{
			write(1, &str[i], 1);
			j--;
		}
		i++;
	}
}


int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	repeat_alpha(argv[1]);
	return (0);
}
