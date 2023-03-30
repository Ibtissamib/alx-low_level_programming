#include "main.h"
/**
 * leet- encodes a string into 1337.
 * @s: pointer to char
 *
 * Return: pointer to char
 */
char *leet(char *s)
{
	char t[5] = {'a', 'e', 'o', 't', 'l'};
	int v[5] = {4, 3, 0, 7, 1};
	int len = 0;
	int i;

	while (*s != '\0')
	{
		for (i = 0; i <= 4; i++)
			if ((*s == t[i]) || (*s == t[i] - 32))
			{
				*s = v[i] + '0';
				break;
			}
		s++;
		len++;
	}
	s = s - len;
	return (s);
}
