#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if (argc != 3)
	{
		printf("Error: Wrong number of arguments!\n");
		return 1;
	}

	char* word = argv[1];
	int n = atoi(argv[2]);

	for (int i = 0; i < n; i += 1)
		printf("%s ", word);
	printf("\n");
}