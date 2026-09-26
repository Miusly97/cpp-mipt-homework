#include <stdio.h>
void print_even (int a, int b)
{	for(int i=a; i<=b; i+=1)
	{if (i%2==0)
	printf("%i ", i);}
}
int main()
{	int a;
	int b;
	scanf("%i%i", &a, &b);
	print_even(a , b);
}
