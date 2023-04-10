#include "main.h"
#include <stddef.h>
/**
 * _strchr- locates a character in a string.
 * @s: pointer to char
 * @c: char
 *
 * Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
			s++;
		else
			break;
	}
	if (*s != c)
		s = NULL;
	return (s);
}
