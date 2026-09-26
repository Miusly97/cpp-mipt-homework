#include <stdio.h>
int summ(int a, int c)
{	while ( a != 0 )
{		int b = a%10;
		c += b;
		a = a/10;
}
	return (c);
}
int main()
{	int a;
	int c =0;
	scanf("%i", &a);
	printf("%i", summ(a, c));
}
