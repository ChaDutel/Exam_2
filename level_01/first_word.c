#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}









int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		i++;
	/*while (argv[1][i] && (!argv[1][i] >= 'a' && !argv[1][i] <= 'z') && (!argv[1][i] => 'A' && !argv[1][i] <= 'Z'))
	{
		i++;
	}*/
	while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	return (0);
}
