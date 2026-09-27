#include <stdio.h>
#define MAX 10
void assign(float A[MAX][MAX], float B[MAX][MAX], int n)
{	for (int i = 0; i < n; i += 1)
{	for (int j = 0; j < n; j += 1)
{		A[i][j] = B[i][j];
}}}
int main()
{	int n;
	scanf("%i", &n);
	float A[MAX][MAX];
	float B[MAX][MAX];
	for (int i = 0; i < n; i += 1)
		for (int j = 0; j < n; j += 1)
			scanf("%f", &A[i][j]);
	for (int i = 0; i < n; i += 1)
		for (int j = 0; j < n; j += 1)
			scanf("%f", &B[i][j]);
	assign(A, B, n);
	for (int i = 0; i < n; i += 1)
{		for (int j = 0; j < n; j += 1)
			printf("%f ", A[i][j]);
    	printf("\n");
}
}
