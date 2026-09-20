#include <stdio.h>
 
int main(void) {
	int n;
	scanf("%i", &n);
	int max;
	max=n;
	printf("%i ", n);
	int i=1;
	while (n!=1) {
 
		if (n%2==0)
		n=n/2;
		else
		n=3*n+1;
		if (max<n)
		max=n;
		printf("%i ", n);
		i+=1;
 
	}
	printf(",количество чисел в последовательности:%i",i);
	printf(",максимальное значение члена последовательности:%i", max);
 
}
 
