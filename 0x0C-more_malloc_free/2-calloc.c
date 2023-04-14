#include "main.h"
#include <stdlib.h>
/**
 * _calloc- allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: pointer tto the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	int *s;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(int) * nmemb);
	if (p == NULL)
		return (NULL);
	s = p;
	while (i < nmemb)
	{
		s[i] = 0;
	}
	return (s);

}
