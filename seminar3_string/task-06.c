#include <stdio.h>

int is_palindrom(char s[])
{
	int len = 0;
	while (s[len] != '\0')
		len += 1;

	int i = 0;
	int j = len - 1;
	while (i < j)
	{
		if (s[i] != s[j])
			return 0;
		i += 1;
		j -= 1;
	}
	return 1;
}

int main()
{
	char s[1000];
	scanf("%s", s);

	if (is_palindrom(s))
		printf("Yes\n");
	else
		printf("No\n");
}