#include <stdio.h> #include <stdbool.h>
#include <string.h>

int main()
{
	const char *colours = "My favourite colour is orange";
	bool love = strstr(colours, "love");

	if (!love)
	{
		printf("String is not present.");
	}

	return 0;

}

#include<stdio.h>
#include<stdarg.h>

void print_ints(int args, ...)
{
	va_list qc;
	va_start(qc, args);

	for(int i = 0; i < args; i++)
	{
		printf("Arguments: %i\n", va_arg(qc, int));
	}

	va_end(qc);
}

int main()
{
	print_ints(20,4,5,24,523,5221,51421,5421,512,636,6234,623,21,1235,43,52,23,4214,262372,343545,213);
	return 0;
}
