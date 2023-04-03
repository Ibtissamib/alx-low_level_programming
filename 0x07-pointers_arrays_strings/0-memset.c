#include "main.h"
/**
 * _memset- fills memory with a constant byte.
 * @s: pointer to char
 * @b: char
 * @n: unsigned ineteger
 *
 * Return: Pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 1;

	while (i <= n)
	{
		*s = b;
		s++;
		i++;
	}
	s = s - n;
	return (s);
}
