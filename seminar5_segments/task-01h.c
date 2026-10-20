#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book_flexible 
{
	char* title; 
	int pages;
	float price;
};
typedef struct book_flexible BookFlex;
void print_book(const Book* b)
{
	printf("Book: %s, Pages: %i, Price: %.2f\n", b->title, b->pages, b->price);
}
int main()
{
	BookFlex* p = (BookFlex*)malloc(sizeof(BookFlex));
	p->title = (char*)malloc(12 * sizeof(char));
	strcpy(p->title, "Don Quixote");
	p->pages = 1000;
	p->price = 750.0;
	printf("Book: %s, Pages: %i, Price: %.2f\n", p->title, p->pages, p->price);
	free(p->title);
	free(p);
}