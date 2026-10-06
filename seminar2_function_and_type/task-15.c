#include <stdio.h>
float yearfrac(int year, int day)
{	
	float n;
	if (year % 4 == 0)
		n = (float)day / 366;
	else
		n = (float)day / 365;
	return n;
}
int main()
{	
	int year;
	int day;
	scanf("%i%i", &year, &day);
	printf ("%.5f", yearfrac(year, day));
}
