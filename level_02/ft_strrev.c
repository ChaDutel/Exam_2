#include <stdio.h>

char    *ft_strrev(char *str)
{
	int	i;
	int	j;
	int	n;
	char	c;

	i = 0;
	j = 0;
	while(str[j])
	{
		j++;
	}
	j--;
	n = j / 2;
	while(i != n)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		j--;
		i++;
	}
	/*while(i != j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		j--;
		i++;
	}*/
	return(str);
}

int	main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", ft_strrev(argv[1]));
	return (0);
}
