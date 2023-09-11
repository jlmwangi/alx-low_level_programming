#include <string.h>
#include <stdio.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	strncpy(d->name, name, sizeof(d->name) - 1);
	d->name[sizeof(d->name) - 1] = '\0';
	d->age = age;
	strncpy(d->owner, owner, sizeof(d->owner) - 1);
	d->owner[sizeof(d->owner) - 1] = '\0';
}
