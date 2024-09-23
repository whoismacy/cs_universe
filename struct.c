#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

int main()
{
	printf("The size of the struct is %zu\n", sizeof(struct Node));
	int *ptr;
	int number = 8999;
	ptr = &number;
	printf("The size of the number pointer is %zu\n", sizeof(ptr));

	return 0;

}
