#include "ft_ultimate_ft.c"
#include <stdio.h>

int main()
{
	int	*a, **b, ***c, ****d, *****e, ******f, *******g, ********h, *********i;
	int x = 1;
	printf("%d\n", x);

	a = &x;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;

	ft_ultimate_ft(i);
	printf("%d\n", x);

	return 0;
}
