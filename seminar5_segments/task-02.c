#include <stdio.h>
#include <stdlib.h>

float* get_geometric_progression(float a, float r, int n)
{
	float* p = (float*)malloc(n * sizeof(float));
	float current = a;
	for (int i = 0; i < n; i += 1)
	{
		p[i] = current;
        current *= r; 
	}
	return p;
}

int main()
{
	float* prog = get_geometric_progression(1.0, 3.0, 10);
	for (int i = 0; i < 10; i += 1)
	{
		printf("%g ", prog[i]);
	}
	printf("\n");
	free(prog);
}