#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number_of_values;
	int i;
	int *pointer;

	printf("What number of values would you like to allocate ?\n");
	scanf("%i", &number_of_values);

	pointer = (int *) malloc(sizeof(int) * number_of_values);

	printf("Key in the values\n");
	for (i = 0; i < number_of_values; i++)
	{
		scanf("%d", (pointer + i));
	}

	printf("The values received from the input are:\n");
	for (i = 0; i < number_of_values; i++)
	{
		printf("The value stored at position %i is %d.\n", i+1, *(pointer + i));
	}

	free(pointer);

	return 0;

}
