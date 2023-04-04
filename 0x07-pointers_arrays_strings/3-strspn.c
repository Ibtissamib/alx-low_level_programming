#include "main.h"
#include <stdio.h>
/**
 * _strspn- gets the length of a prefix substring.
 * @s: pointer to char
 * @accept: char
 *
 * Return: unsigned ini
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0, i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (length);
		}
		s++;
	}
	return (length);
}
