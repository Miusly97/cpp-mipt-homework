#include <stdio.h>

void mult2(int* p, size_t n)
{
	for (size_t i = 0; i < n; i += 1)
		p[i] *= 2;
}

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	mult2(a, 5);   // так потому что название массива эквивалентно указателю на первый элемент массива
	for (int i = 0; i < 5; i += 1)
		printf("%i ", a[i]);     
}