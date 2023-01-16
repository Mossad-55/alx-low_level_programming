#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string.
 * @s: string.
 *
 * Return: int.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * *_strcpy - copies a string from src to dest.
 * @dest: pointer (string).
 * @src: pointer (string).
 * @len: int (length of the src).
 * Return: pointer.
 */
char *_strcpy(char *dest, char *src, int len)
{
	int i;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

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
	int len_name, len_owner;

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (len_name + 1));
	doggy->owner = malloc(sizeof(char) * (len_owner + 1));
	if (doggy->name == NULL || doggy->owner == NULL)
	{
		free(doggy);
		free(doggy->name);
		free(doggy->owner);

		return (NULL);
	}

	_strcpy(doggy->name, name, len_name);
	_strcpy(doggy->owner, owner, len_owner);
	doggy->age = age;

	return (doggy);
}
