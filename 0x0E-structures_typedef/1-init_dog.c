#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  a function that initialize a variable
 * of type struct dog
 * @d: structure of the dog
 * @name: the name of the dog
 * @age: how old the dog is
 * @owner: the caretaker
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
