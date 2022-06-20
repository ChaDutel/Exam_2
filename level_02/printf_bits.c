#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		i;
	//int		bits;

	i = 7;
	
	while(i > -1)
	{
		//bits = (octet >> i) & 1;
		if (((octet >> i) & 1) == 0)
			write(1, "0", 1);
		else if (((octet >> i) & 1) == 1)
			write(1, "1", 1);
		i--;
	}
}

int	main(void)
{
	char	c;

	c = 'a';
	print_bits(c);
	return (0);
}
