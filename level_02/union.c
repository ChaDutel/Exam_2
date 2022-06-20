#include <unistd.h>

char	tab_cmp_add(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ('\0');
		i++;
	}
	str[i] = c;
	return (c);
}

int	main(int argc, char **argv)
{
	int		i;
	char	str[1000] = {0};
	char	letter;

	i = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][i])
	{
		letter = tab_cmp_add(str, argv[1][i]);
		if (letter == '\0')
			i++;
		else
		{
			write(1, &letter, 1);
			i++;
		}
	}
	i = 0;
	while(argv[2][i])
	{
		letter = tab_cmp_add(str, argv[2][i]);
		if (letter == '\0')
			i++;
		else
		{
			write(1, &letter, 1);
			i++;
		}
	}
	return (0);
}
