#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparison(const void *x_void, const void *y_void)
{
	int x = *(int *)x_void;
	int y = *(int *)y_void;
	return y - x ;
}

int comparator(const void *x, const void *y)
{
	char **xx = (char **)x;
	char **yy = (char **)y;
	return strcmp(*xx, *yy);
}

int main()
{
	int array[] = {23, 654, 12 ,6233, 13 ,6634, 12243, 99};
	int length = 8;

	qsort(array, 8, sizeof(int), comparison);

	for (int i = 0; i < length; i++)
	{
		printf("array[%d] : %d\n", i, array[i]);
	}

	char *names[] = {"Shem", "Murimi", "Murithi", "Solomon", "Garnacho"};

	qsort(names, 5, sizeof(char *), comparator);

	for (int j = 0; j < 5; j++)
	{
		printf("%s\n", names[j]);
	}

	return 0;
}

