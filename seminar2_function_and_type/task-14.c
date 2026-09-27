#include <stdio.h>
void razm (int n, int k)
{	unsigned long long result = 1; 
	for (int i = 0; i < k; i += 1)
		result *= n - i;
	printf("%llu", result);
}
int main()
{	int n;
	int k;
	scanf ("%i%i", &n, &k);
	razm (n, k);
}
