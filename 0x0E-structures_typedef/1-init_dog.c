#include "dog.h"
/**
 * init_dog - initialices my dog
 * @d: struct
 * @name: name
 * @age: float age
 * @owner: Andres Hurtado
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->name = name;
	d->owner = owner;
}
