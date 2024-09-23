#include <stdio.h>

typedef union
{
	short count;
	float weight;
	float volume;
} quantity;

int main()
{
	quantity tomatoes = {.weight = 1, .volume = 12};
	tomatoes.weight = 21;
	printf("tomatoes.count = %i\n", tomatoes.count);
	printf("tomatoes.weight = %f\n", tomatoes.weight);
	printf("tomatoes.volume = %f\n", tomatoes.volume);

	return 0;
}
