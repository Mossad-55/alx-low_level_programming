#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct.
 * @name: First member.
 * @age: Second member.
 * @owner: Third member.
 *
 * Description: this is a struct for a dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src, int len);
void free_dog(dog_t *d);

#endif

