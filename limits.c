#include <stdio.h>
#include <limits.h>
#include <float.h>

//The format specifier for INT_MAX and INT_MIN is %zu this also includes CHAR_BIT and SHRT_MIN


int main()
{
	printf("The value of INT_MAX is %i\n", INT_MAX);
	printf("The value of INT_MIN is %i\n", INT_MIN);
	printf("An int takes %zu bytes\n", sizeof(int));
	printf("\n");

	printf("The value of FLT_MAX is %f\n", FLT_MAX);
	printf("The value of FLT_MIN is %.5f\n", FLT_MIN);
	printf("A float take the value of: %zu bytes", sizeof(float));
	printf("\n");

	printf("The value of  CHAR_BIT is %i\n", CHAR_BIT);
	printf("The value of  SHRT_MIN is %i\n", SHRT_MIN);

	return 0;

}
