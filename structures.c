#include <stdio.h>
#include <stdlib.h>
struct exercise
{
	const char *description;
	float duration;
};

struct meal
{
	const char *ingredients;
	float weight;
};

struct preferences
{
	struct meal food;
	struct exercise exercises;
};

struct fish
{
	const char *name;
	const char *species;
	int teeth;
	int age;
	struct preferences care;
	struct meal foods;
};

void label(struct fish a)
{
	printf("Name: %s\nSpecies:%s\n%i years old , %i teeth\n", a.name, a.species, a.age, a.teeth);
	printf("Feed with %2.2f lbs of %s and allow to %s for  %2.2f hours\n", a.foods.weight, a.foods.ingredients, a.care.exercises.description, a.care.exercises.duration);
}

void catalog(struct fish f)
{
	printf("%s is a %s with %i teeth and is of age %i his favourite food is %s and exercises everyday for %f hours. \n", f.name, f.species, f.teeth, f.age, f.care.food.ingredients, f.care.exercises.duration);
}

int main()
{
	struct fish snappy = {"Snappy", "Piranha", 69, 4, {{"Meat", 0.2},{"Playing Fish tennis", 2.5}}, {"Meat", 75}};
	catalog(snappy);
	printf("\n");
	label(snappy);
	return 0;
}
