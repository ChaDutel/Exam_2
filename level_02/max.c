#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	i;
	int	max;

	i = 0;
	if (len == 0)
		return (0);
	max = tab[i];
	while (i != len)
	{
		if (max < tab[i])
				max = tab[i];
		i++;
	}
	return (max);
}

int	main(void)
{
	int	tab[] = {0, 5, 3, 7, 2, 8};
	int	len = 6;
	int	res;

	res = max(tab, len);
	printf("%d", res);
	return (0);
}
