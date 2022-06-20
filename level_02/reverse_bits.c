#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int		i;
	int		j;
	char	ret;

	i = 0;
	j = 7;
	ret = 0;
	while (i < 8)
	{
		if ((octet >> i & 1) == 0)
		{
			ret >> j = 0;
			j--;
		}
		else if ((octet >> i & 1) == 1)
		{
			ret >> j = 1;
			j--;
		}
		i++;
	}
	return (ret);
}

int	main(void)
{
	char	c;

	c = 'a';
	printf("%c", reverse_bits(c));
	return (0);
}
