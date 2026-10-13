#include <stdio.h>
#include <string.h>

char* strmax(char** strings, size_t n)
{
	char* best = strings[0];
	for (size_t i = 1; i < n; i += 1)
	{
		if (strcmp(strings[i], best) > 0)
			best = strings[i];
	}
	return best;
}

int main()
{
	char a[] = "Cat";
	char b[] = "Mouse";
	char c[] = "Wolf";
	char d[] = "Kangaroo";
	char e[] = "Elephant";

	char* animals[5] = {a, b, c, d, e};
	char* x = strmax(animals, 5);
	printf("%s\n", x);   
}