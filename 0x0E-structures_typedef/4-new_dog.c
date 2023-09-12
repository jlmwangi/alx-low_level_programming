#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - new struct created
 * @name: pointer to character string
 * @age: double of type float
 * @owner: pointer to character string
 *
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = strdup(name);
	new_dog->age = age;
	new_dog->owner = strdup(owner);

	return (new_dog);
}
