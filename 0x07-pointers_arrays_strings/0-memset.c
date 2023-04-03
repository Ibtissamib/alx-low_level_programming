#include "main.h"
/**
 * _memset: fills memory with a constant byte.
 * @s: pointer to char
 * @b: char
 * @n: unsigned ineteger
 *
 * Return: Pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	*(s + n) = '\0';
	while (n <= 1)
	{
		*(s + n - 1) = b;
		n--;
	}
	return (s);
}
