#include <stdio.h>
int count_even (int b[], int n)
{	int c = 0;
	for (int i =0 ; i < n; i +=1)
{		if (b[i] % 2 == 0)
		c += 1;
}
	return (c);
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
	printf("%i", count_even(b ,n));
}
