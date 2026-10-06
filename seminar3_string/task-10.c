#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%i", &n);

	int x = 0;
	int y = 0;

	for (int i = 0; i < n; i += 1)
	{
		char dir[100];
		int dist;
		scanf("%s%i", dir, &dist);

		if (strcmp(dir, "North") == 0)
			y += dist;
		else if (strcmp(dir, "South") == 0)
			y -= dist;
		else if (strcmp(dir, "East") == 0)
			x += dist;
		else if (strcmp(dir, "West") == 0)
			x -= dist;
	}

	printf("%i %i\n", x, y);
}