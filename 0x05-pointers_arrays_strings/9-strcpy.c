#include "main.h"
/**
 * _strcpy- copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: pointer to char
 * @src: pointer to char
 *
 * Return: pointer to char
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (*src != '\0')
	{
		*dest = *src;
		n++;
		src++;
		dest++;
	}
	*dest = '\0';
	while (n > 0)
	{
		dest--;
		n--;
	}

	return (dest);
}
