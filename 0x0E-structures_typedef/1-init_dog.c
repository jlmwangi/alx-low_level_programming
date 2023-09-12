#include <string.h>
#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a struct dog
 * @d: pointer to the struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
		{
			return;
		}
	}
	strncpy(d->name, name, sizeof(d->name) - 1);
	d->name[sizeof(d->name) - 1] = '\0';
	d->age = age;
	strncpy(d->owner, owner, sizeof(d->owner) - 1);
	d->owner[sizeof(d->owner) - 1] = '\0';
}
