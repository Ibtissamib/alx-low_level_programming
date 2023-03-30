#include "main.h"
/**
 * cap_string- capitalizes all words of a string.
 * @s: pointer to char
 *
 * Return: pointer to char
 */
char *cap_string(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		if ((*(s - 1) == ' ') ||
		(*(s - 1) == '.') ||
		(*(s - 1) == '\n') ||
		(*(s - 1) == '	'))
			if ((*s <= 122) && (*s >= 97))
				*s = *s - 32;
		s++;
		len++;
	}
	s = s - len;
	return (s);
}
