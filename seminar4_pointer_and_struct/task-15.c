#include <stdio.h>

struct node
{
	int value;
	struct node* ptr;
};
typedef struct node Node;

int main()
{
	Node a, b, c;

	a.value = 10;
	b.value = 20;
	c.value = 30;

	a.ptr = &b;
	b.ptr = &c;
	c.ptr = &a;

	Node* p = &a;
	for (int i = 0; i < 10; i += 1)
	{
		printf("%i ", (*p).value);
		p = (*p).ptr;
	}
	printf("\n");
}