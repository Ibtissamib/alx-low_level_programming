#include "main.h"
/**
 * string_toupper- changes all lowercase letters of a string to uppercase.
 * @s: pointer to char
 *
 * Return: pointer
 */
char *string_toupper(char *s)
{
	int len = 0;
	char i;

	while (*s != '\0')
	{
		for (i = 97; i <= 122; i++)
			if (*s == i)
			{
				*s = i - 32;
				break;
			}
		i = 97;
		s++;
		len++;
	}
	s = s - len;
	return (s);
}
