#include <stdio.h>
#include <stdlib.h>
int less(int a, int b)
{
	if (a < b) return -1;
	if (a > b) return 1;
	return 0;
}
int greater(int a, int b)
{
	if (a > b) return -1;
	if (a < b) return 1;
	return 0;
}

int last_digit_less(int a, int b)
{
	int last_a = a % 10;
	int last_b = b % 10;
	if (last_a < last_b) return -1;
	if (last_a > last_b) return 1;
	return 0;
}

void sort(int* a, size_t n, int (*comp)(int, int))
{
	for (size_t j = 0; j < n; j += 1)
	{
		size_t min_index = j;
		for (size_t i = j + 1; i < n; i += 1)
		{
			if (comp(a[i], a[min_index]) < 0)
				min_index = i;
		}

		int temp = a[j];
		a[j] = a[min_index];
		a[min_index] = temp;
	}
}

void print(int* a, size_t n)
{
	for (size_t i = 0; i < n; i += 1)
		printf("%i ", a[i]);
	printf("\n");
}

int main()
{
	int a[] = {32, 63, 29, 54, 81};
	
	sort(a, 5, less);
	print(a, 5); 
		
	sort(a, 5, greater);
	print(a, 5); 

	sort(a, 5, last_digit_less);
	print(a, 5); 
}