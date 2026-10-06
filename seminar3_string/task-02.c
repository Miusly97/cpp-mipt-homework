#include <stdio.h>

int main()
{
	for (int i = ' '; i <= '~'; i += 1)
		printf("Symbol = %c, Code = %i\n", i, i);
}