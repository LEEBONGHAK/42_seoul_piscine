#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int main()
{
	int a = 6, b = 4;

	printf("a : %d, b : %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);

	printf("a : %d, b : %d\n", a, b);
	return 0;
}
