#include <stdio.h>

int main()
{
	int i, j = 1;
	int k,l;

	for (i = 0; i < 5; i++)
	{
		while (j < 5)
		{
			printf(" ");
			j++;
		}

		for (k = 0; k < i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
