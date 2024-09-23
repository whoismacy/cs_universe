#include <stdio.h>

typedef struct island
{
	char *name;
	char *opens;
	char *closes;
	struct island *next;
}island;

void display(island *start)
{
	island *i = start;

	for(; i != NULL; i = i->next)
	{
		printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
	}
}

int main()
{
	island amitty = {"Amitty", "09:00", "17:00", NULL};
	island craggy = {"Craggy", "09:00", "17:00", NULL};
	island isla_nubar = {"Isla Nubar", "09:00", "17:00", NULL};
	island shutter = {"Shutter", "09:00", "17:00", NULL};

	amitty.next = &craggy;
	craggy.next = &isla_nubar;
	isla_nubar.next = &shutter;

	display(&amitty);

	return 0;
}
