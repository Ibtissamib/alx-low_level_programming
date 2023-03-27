#include "main.h"
/**
 * _strlen- returns the length of a string
 * @s: pointers on string
 *
 * Return: Integer
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
