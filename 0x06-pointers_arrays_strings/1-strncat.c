#include "main.h"
/**
 * _strncat- concatenates two strings.
 * @dest: pointer to char
 * @src: pointer to char
 * @n: int
 *
 * Return: pointer to char
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0;

	if (n > 0)
	{
		while (*dest != '\0')
		{
			dest++;
			len1++;
		}
		while ((*src != '\0') && (n > 0))
		{
			*dest = *src;
			dest++;
			src++;
			len1++;
			len2++;
			n--;
		}
		*dest = '\0';
		src = src - len2;
		dest = dest - len1;
	}
	return (dest);
}

