#include <stdio.h>
#include "encrypt.h"
#include "checksum.h"

void encrypt(char *message)
{
	while( *message)
	{
		*message = *message ^ 29;
		message ++;
	}

}
