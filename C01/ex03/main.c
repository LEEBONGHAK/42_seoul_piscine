#include <stdio.h>
#include "ft_div_mod.c"

int main()
{
	int a = 6, b = 4;
	int div, mod;

	ft_div_mod(a, b, &div, &mod);
	printf("div : %d, mod : %d\n", div, mod);
	return 0;
}
