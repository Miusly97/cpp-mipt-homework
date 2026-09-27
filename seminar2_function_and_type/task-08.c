#include <stdio.h>
int reverse (int b[], int n)
{	for (int i = 0; i < n/2; i += 1)
{		int m = b[i];
		b[i] = b[n-1-i];
		b[n-1-i] = m;
}	
}
int main()
{	int n;
    scanf ("%i", &n);
	int a;
	int b[n];
	for (int i=0; i < n; i +=1)
{		scanf("%i", &a);
		b[i] = a;
}
	reverse (b ,n);
	for (int i=0; i < n; i +=1)
		printf("%i ", b[i]);
}
