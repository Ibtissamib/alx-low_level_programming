#include "main.h"
/**
 * rot13- encodes a string using rot13.
 * @s: pointer to char
 *
 * Return: pointer to char
 */
char *rot13(char *s)
{
	int len = 0;
	char i = 97;

	while (*s != '\0')
	{
		while (i <= 122)
		{
			if ((*s == i || *s == i - 32) && i <= 109)
			{
				*s = *s + 13;
				break;
			}
			else if ((*s == i || *s == i - 32) && i > 109)
			{
				*s = *s - 13;
				break;
			}
			else
				i++;
		}
		i = 97;
		s++;
		len++;
	}
	s = s - len;
	return (s);
}
