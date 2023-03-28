#include "main.h"
/**
 * rev_string- reverses a string.
 * @s: pointer to an int
 *
 * Return: Void
 */
void rev_string(char *s)
{
	char a;
	int i = 1, len = 0;
	char *s2 = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (i <= (len / 2))
	{
		a = *s;
		*s = *s2;
		*s2 = a;
		i++;
		s--;
		s2++;
	}
}
