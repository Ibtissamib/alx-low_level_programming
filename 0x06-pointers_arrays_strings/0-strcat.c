#include "main.h"
/**
 * _strcat- concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 *
 * Return: pointer to char
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0;

	while (*dest != '\0')
	{
		dest++;
		len1++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		len2++;
	}
	*dest = '\0';
	src = src - len2;
	dest = dest - len1 -len2;
	return (dest);
}
