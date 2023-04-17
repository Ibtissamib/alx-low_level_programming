#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - Define a new type struct dog
 * @name: pointer to char
 * @age :float
 * @owner: pointer to char
 *
 * Description: defines a new type struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog_t
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* MAIN_H */
