#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

int main()
{
	char str[] = "Hello";

	printf("strlen\n");
	printf("%lu\n\n", strlen(str));

	printf("ft_strlen\n");
	printf("%d\n", ft_strlen(str));

	return 0;
}
