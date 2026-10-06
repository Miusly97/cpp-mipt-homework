#include <stdio.h>

int main()
{
	char s[1000000];
	scanf("%s", s);

	int sum = 0;
	for (int i = 0; s[i] != '\0'; i += 1)
		sum += s[i] - '0'; //это типа чтобы из литерала получить число в интовой форме

	printf("%i\n", sum);
}