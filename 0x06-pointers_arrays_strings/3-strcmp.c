#include "main.h"
/**
 * _strcmp- compares two strings.
 * @s1: pointer to char
 * @s2: pointer to char
 *
 * Return: 15 if s1 is greater , -15 if s2 is greater,
 * 0 if s1 & s2 are equals
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			break;
	}
	if (*s1 == *s2)
		n = 0;
	else if (*s1 < *s2)
		n = -15;
	else
		n = +15;
	return (n);
}
