#include "dog.h"
/**
 * print_dog- function that prints a struct dog
 * @d: struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("name: %s\nage: %f\nowner: %s\n", d->name, d->age, d->owner);
	}
}
