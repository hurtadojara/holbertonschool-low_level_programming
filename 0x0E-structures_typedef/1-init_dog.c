#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->name = name;
	d->owner = owner;
}
