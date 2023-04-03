#include "main.h"
/**
 * _strspn- gets the length of a prefix substring.
 * @s: pointer to char
 * @accept: char
 *
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0, len_acc = 0;

	while (*accept != '\0')
	{
		while (*accept != *s)
		{
			accept++;
			len_acc++;
		}
		accept = accept - len_acc;
		s++;
		length++;
	}
	return (length);
}
