#include <stdio.h>
#include "encrypt.h"

void encrypt(char *message)
{
	while( *message)
	{
		*message = *message ^ 29;
		message ++;
	}

}

int main()
{
	char adl[] = " i am learning C and i don't know if i'll be great someday but that doesn't matter";
	int x = sizeof(adl) / sizeof(adl[0]);
	int i;
	encrypt (adl);
	for(i = 0; i < x; i++)
	{
		printf("%c", adl[i]);
	}

}
