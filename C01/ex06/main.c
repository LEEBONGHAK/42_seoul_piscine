#include "ft_strlen.c"
#include <stdio.h>

int main()
{
	char arr[] = "Hello, World!";
	int res;

	res = ft_strlen(arr);
	printf("%d\n", res);
	return 0;
}
