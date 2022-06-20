#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int			i;
	int			negative;
	long long	result;

	i = 0;
	result = 0;
	negative = 1;
	if (!str)
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F'))
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * str_base + (str[i] - '0');
		else if (str[i] >= 'a' && str[i] <= 'f')
			result = result * str_base + (str[i] - 87);
		else if (str[i] >= 'A' && str[i] <= 'F')
			result = result * str_base + (str[i] - 55);
		i++;
	}
	return (negative * result);
}

int	main(int argc, char **argv)
{
	(void) argc;
	int	res;
	char	*str = NULL;

	res = ft_atoi_base(str, 16);
	printf("%d\n", res);
	return (0);
}
