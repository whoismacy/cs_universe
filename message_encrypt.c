#include <stdio.h>
#include "encrypt.h"

int main()
{
	char msg[80];
	while(fgets(msg, 80, stdin))  // will read the line until it encounters an EOF. getopt() returns -1 when it gets an error or there are no more arguments to read.
	{
		encrypt(msg);
		printf("Here is the encrypted message: \n");
		printf("%s", msg);
	}
	return 0;
}
