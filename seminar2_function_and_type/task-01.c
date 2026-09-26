#include <stdio.h>
int cube(int a)
{	return a*a*a;
}
int main()
{	int a;
	scanf("%i", &a);
	printf("%i" , cube(a));
}
