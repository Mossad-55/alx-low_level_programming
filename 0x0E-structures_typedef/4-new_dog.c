#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog.
 * @name: pointer (string).
 * @age: number.
 * @owner: pointer (string).
 * Return: pointer to dog struct or null.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;

	return (doggy);
}
