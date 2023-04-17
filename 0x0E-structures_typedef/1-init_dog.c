#include "dog.h"
/**
 * init_dog- initialize a variable of type struct dog
 * @d: struct dog
 * @name: pointer to char
 * @age :float
 * @owner: pointer to char
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d == malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
