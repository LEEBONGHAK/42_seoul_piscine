#include <stdio.h>
#include "ft_swap.c"

int main()
{
	int a = 1, b = 2;

	printf("a : %d, b : %d\n", a, b);
	ft_swap(&a, &b);
	
	printf("a : %d, b : %d\n", a, b);
	return 0;
}
