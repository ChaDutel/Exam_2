#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int	i;
	//int	j;
	int	line1;
	int	line2;
	int	res;

	i = 0;
	//j = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] && argv[3][i])
	{
		if ((!(argv[1][i] >= '0') && !(argv[1][i] <= '9')) || (!(argv[3][i] >= '0') && !(argv[3][i] <= '9')))
		{
			write(1, "\n", 1);
			return (0);
		}
		i++;
	}
	if (argv[2][0] != '+' &&  argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%')
	{
		write(1, "\n", 1);
		return (0);
	}
	line1 = atoi(argv[1]);
	line2 = atoi(argv[3]);
	if (argv[2][0] == '+')
	{
		res = line1 + line2;
		printf("%d", res);
		return (0);
	}
	else if (argv[2][0] == '-')
	{
		res = line1 - line2;
		printf("%d", res);
		return (0);
	}
	else if (argv[2][0] == '*')
	{
		res = line1 * line2;
		printf("%d", res);
		return (0);
	}
	else if (argv[2][0] == '/')
	{
		res = line1 / line2;
		printf("%d", res);
		return (0);
	}
	else if (argv[2][0] == '%')
	{
		res = line1 % line2;
		printf("%d", res);
		return (0);
	}
	return (0);
}
