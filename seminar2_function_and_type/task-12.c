#include <stdio.h>
#define MAX 10
void assign(float B[MAX][MAX], float A[MAX][MAX], int n)
{	for (int i = 0; i < n; i += 1)
{	for (int j = 0; j < n; j += 1)
{		B[i][j] = A[i][j];
}}}
void multiply(float A[MAX][MAX], float B[MAX][MAX], float C[MAX][MAX], int n)
{	for (int i = 0; i < n; i += 1)
{		for (int j = 0; j < n; j += 1)
{			C[i][j] = 0;
	for (int k = 0; k < n; k += 1)
{   	C[i][j] += A[i][k] * B[k][j];
}}}}
void power(float A[MAX][MAX], float C[MAX][MAX], int n, int k)
{	float B[MAX][MAX];
	assign(B, A, n);               
	assign(C, A, n);              
	for (int i = 0; i < k - 1; i += 1)
{		multiply(A, B, C, n);      
		assign(B, C, n);           
}}
int main()
{	int n;
	int k;
	scanf("%i%i", &n, &k);
	float A[MAX][MAX];
	float C[MAX][MAX];
	for (int i = 0; i < n; i += 1)
		for (int j = 0; j < n; j += 1)
			scanf("%f", &A[i][j]);
	power(A, C, n, k);
	for (int i = 0; i < n; i += 1)
{		for (int j = 0; j < n; j += 1)
			printf("%g ", C[i][j]);
		printf("\n");
}
}
