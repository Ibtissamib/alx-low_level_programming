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
	char i;

	while (*s != '\0')
	{
		for (i = 97; i <= 122; i++)
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
		}
		s++;
		len++;
	}
	s = s - len;
	return (s);
}
