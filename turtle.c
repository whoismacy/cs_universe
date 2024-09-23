#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	const char *name;
	const char *species;
	int age;
} turtle;

void happy_birthday(turtle *a)
{
	(*a).age = (*a).age + 1;
	printf("Happy Birthday %s you are now %i years old.", (*a).name, (*a).age);
}

int main()
{
	turtle Miles = {"Miles", "Leatherback Sea Turtle", 89};
	happy_birthday(&Miles);

	return 0;
}
