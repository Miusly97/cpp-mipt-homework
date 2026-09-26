#include <stdio.h>
int two(int a)
{	if (a > 1)
		two(a/2);
	printf ("%i", a%2);
}
int main()
{	int a;
	scanf("%i", &a);
	two(a);
}
