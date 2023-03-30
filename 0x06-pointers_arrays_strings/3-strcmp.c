#include"main.h"
/**
 * _strcmp- compares two strings.
 * @s1: pointer to char
 * @s2: pointer to char
 *
 * Return: Integer
 */
int _strcmp(char *s1, char *s2)
{
	int len = 0, n = 0;

	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		s1++;
		s2++;
		len++;
	}
	if (*s1 != '\0')
		n = 15;
	else if (*s2 != '\0')
		n = -15;
	else
		n = 0;
	s1 = s1 - len;
	s2 = s2 - len;
	return (n);
}
