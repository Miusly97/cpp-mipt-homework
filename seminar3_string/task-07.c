#include <stdio.h>
#include <string.h>

void encrypt(char str[], int k)
{
	k = k % 26;
	for (int i = 0; str[i] != '\0'; i += 1)
	{
		char c = str[i];
		if (c >= 'A' && c <= 'Z')
			str[i] = 'A' + (c - 'A' + k) % 26;
		else if (c >= 'a' && c <= 'z')
			str[i] = 'a' + (c - 'a' + k) % 26;
	}
}

int main()
{
	int k;
	char s[1000];
	scanf("%i", &k);
	scanf(" %[^\n]", s);
	encrypt(s, k);
	printf("%s\n", s);
}