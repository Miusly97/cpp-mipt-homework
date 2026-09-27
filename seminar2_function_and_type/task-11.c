#include <stdio.h>
#define MAX 10
void multiply(float A[MAX][MAX], float B[MAX][MAX], float C[MAX][MAX], int n)
{	for (int i = 0; i < n; i += 1)
{		for (int j = 0; j < n; j += 1)
{			C[i][j] = 0;
	for (int k = 0; k < n; k += 1)
{   	C[i][j] += A[i][k] * B[k][j];
}}}}
int main()
{	int n;
	scanf("%i", &n);
	float A[MAX][MAX];
	float B[MAX][MAX];
	float C[MAX][MAX];
	for (int i = 0; i < n; i += 1)
		for (int j = 0; j < n; j += 1)
			scanf("%f", &A[i][j]);
	for (int i = 0; i < n; i += 1)
		for (int j = 0; j < n; j += 1)
			scanf("%f", &B[i][j]);
	multiply(A, B, C, n);
	for (int i = 0; i < n; i += 1)
{	for (int j = 0; j < n; j += 1)
			printf("%f ", C[i][j]);
		printf("\n");
}
}
