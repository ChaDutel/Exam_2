#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char	*str;
	int	i;

	i = 0;
	while(src[i])
	{
		i++;
	}
	str = malloc(sizeof(char) * ( i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while(src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", ft_strdup(argv[1]));
	return (0);
}
