#include "main.h"
#include <stdlib.h>
/**
 * set_b- set elements of the pointer to b
 * @s: pointer to char
 * @b: char
 * @n: size of s
 *
 * Return: pointer
 */
char *set_b(char *s, char b, unsigned int n)
{
	char *set = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (set);
}
/**
 * _calloc- allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * @n size of s
 *
 * Return: pointer tto the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	set_b(p, 0, size * nmemb);
	return (p);
}
