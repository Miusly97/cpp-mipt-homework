#include <stdio.h>
long long memo [1000];
long long trib(int n)
{	if (n == 0)
		return 0;
	if (n == 1)	
		 return 0;
	if (n == 2)
		return 1;
	if (memo[n] != 0)
		return memo[n];
	memo[n] = trib(n-3) + trib(n-2) + trib(n-1);
	return memo[n];
}
int main()
{	int n;
	scanf("%i", &n);
	printf ("%i", trib(n));
}
