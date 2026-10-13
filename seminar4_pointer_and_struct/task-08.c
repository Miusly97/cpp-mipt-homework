#include <stdio.h>

void set_characters(char* begin, char* end, char c)
{
	int n = end - begin;
	for (int i = 0; i < n; i += 1)
		begin[i] = c;
}

int main()
{
	char s[] = "Sapere Aude";
	set_characters(&s[2], &s[8], 'b');
	printf("%s\n", s);   
	set_characters(s, &s[4], 'a');
	printf("%s\n", s);  
}