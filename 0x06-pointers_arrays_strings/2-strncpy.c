#include "main.h"
/**
 * _strncpy- copies a string.
 * @dest: pointer to char
 * @src: pointer to char
 * @n: Integer
 *
 * Return: pointer to char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len2 = 0;

	if (n > 0)
	{
		while ((*src != '\0') && (n > 0))
		{
			*dest = *src;
			dest++;
			src++;
			len2++;
			n--;
		}
		if (*src == '\0')
			*dest = '\0';
		dest = dest - len2;
		src = src - len2;
	}
	return (dest);
}
