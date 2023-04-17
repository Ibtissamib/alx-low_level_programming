#include "dog.h"
/**
 * new_dog- creates a new dog.
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i = 0, j = 0, len1 = 0, len2 = 0;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	while (name[len1])
		len1++;
	while (owner[len2])
		len2++;
	d->name = malloc(sizeof(char) * (len1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	while (i < len1)
	{
		(d->name)[i] = name[i];
		i++;
	}
	d->name[i] = '\0';
	d->age = age;
	d->owner = malloc(sizeof(char) * (len2 + 1));
	if (n->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);

	}
	while (j < len2)
	{
		(d->owner)[j] = owner[j];
		j++;
	}
	(d->owner)[j] = '\0';
	return (d);
}
