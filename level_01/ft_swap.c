#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	printf("%d", *a);
	tmp = *a;
	*a =  *b;
	*b  = tmp;
	printf("%d", *a);
}

int main(void)
{
	int	a;
	int	b;

	a = 8;
	b = 9;
	ft_swap(&a, &b);
}
