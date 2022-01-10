#include <stdio.h>
#include "ft_atoi_base.c"

int main()
{
	char str1[] = "  ---+--+1234ab567";
	char str2[] = "---+--+1234ab567";
	char base1[] = "abc";
	char base2[] = "aaa";
	char base3[] = "";

	printf("%d\n", ft_atoi_base(str1, base1));
	printf("%d\n", ft_atoi_base(str1, base2));
	printf("%d\n", ft_atoi_base(str1, base3));
	printf("%d\n", ft_atoi_base(str2, base1));
	printf("%d\n", ft_atoi_base(str2, base2));
	printf("%d\n", ft_atoi_base(str2, base3));
	
	return 0;
}
