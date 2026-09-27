#include <stdio.h>
void alice(int n); 
void bob (int n)
{	n = n / 2;
	printf("Bob: %i\n", n);
	if (n == 1)
		return;
	if (n % 2 == 0)
		bob(n);
	else
		alice(n);
}
void alice(int n)
{	n = 3 * n + 1;
	printf ("Alice: %i\n", n);
	bob (n);
}
int main()
{	int n;
    scanf ("%i", &n);
	alice (n);
}
