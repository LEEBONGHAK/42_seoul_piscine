#include <stdio.h>
#include "ft_atoi.c"

int main()
{
	char str[] = "  ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
	return 0;
}
