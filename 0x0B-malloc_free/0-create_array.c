#include "main.h"
#include <stdlib.h>
/**
 * create_array- creates an array of chars, and initializes it
 * with a specific char
 * @size: unsigned int
 * @c: char
 *
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
