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
	char *s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *s2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*s != '\0')
	{
		for (i = 0; i <= 51; i++)
		{
			if (*s == s1[i])
			{
				*s = s2[i];
				break;
			}
		}
		s++;
		len++;
	}
	s = s - len;
	return (s);
}
