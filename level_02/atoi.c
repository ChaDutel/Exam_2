#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int			i;
	int			negative;
	long long	result;

	i = 0;
	result = 0;
	negative = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (negative * result);
}

int	main(int argc, char **argv)
{
	(void) argc;
	int	res;

	res = ft_atoi(argv[1]);
	printf("%d\n", res);
	printf("%d\n", atoi(argv[1]));
	return (0);
}
