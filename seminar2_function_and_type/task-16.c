#include <stdio.h>
form (int n)
{	
	double sum = 0;
	for (int i = 1; i <= n; i += 1)
	{		
		if (i % 2 != 0)
			sum += 1.0 / (2 * i - 1);
		else
			sum -= 1.0 / (2 * i - 1);
	}
	printf("%lf", 4 * sum);
}
int main()
{	
	int n;
	scanf("%i", &n);
	form(n);
	
}
