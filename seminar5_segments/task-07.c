#include <stdio.h>
#include <math.h>
int is_negative(int x)
{
	if (x < 0)
		return 1;
	else
		return 0;
}

int is_even(int x)
{
	if (x % 2 == 0)
		return 1;
	else
		return 0;
}

int is_square(int x)
{
	if (x < 0) return 0;
	int root = (int)sqrt(x);
	if (root * root == x)
		return 1;
	else
		return 0;
}

int count_if(int* a, int n, int (*f)(int))
{
	int count = 0;
	
	for (int i = 0; i < n; i += 1)
	{
		if (f(a[i]) == 1)
		{
			count += 1;
		}
	}
	
	return count;
}

int main()
{
	int a[] = {89, 81, 28, 52, 44, 16, -64, 49, 52, -79};
	int n = 10;
	printf("%i\n", count_if(a, n, is_negative)); 
	printf("%i\n", count_if(a, n, is_even));    
	printf("%i\n", count_if(a, n, is_square));
}