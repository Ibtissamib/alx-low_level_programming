#include "main.h"
/**
 * _memcpy- copies memory area.
 * @dest: pointer to char
 * @src: pointer to char
 * @n: unsigned int
 *
 * Return: pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 1;

	while (i <= n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	dest = dest - n;
	return (dest);
}
