#include "main.h"
/**
 * _strcmp- compares two strings.
 * @s1: pointer to char
 * @s2: pointer to char
 *
 * Return: *s1-*s2 if s1 and s2 are differents,
 * 0 if s1 & s2 are equals
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			n = *s1 - *s2;
			break;
		}
		else
		{
			s1++;
			s2++;
		}
	}
	return (n);
}
