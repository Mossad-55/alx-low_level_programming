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
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

