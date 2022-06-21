#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	int	j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while(reject[j] && s[i] != reject[j])
			j++;
		if (s[i] == reject[j])
			return(i);
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	(void) argc;

	printf("%lu\n", strcspn(argv[1], argv[2]));
	printf("%lu\n", ft_strcspn(argv[1], argv[2]));
	return (0);
}
