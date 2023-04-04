#include "main.h"
#include <stddef.h>
/**
 * _strstr-  locates a substring
 * @haystack: pointer to char
 * @needle: pointer to char
 *
 * Return: poinetr to char
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		i = 0;
		if (needle[i] == haystack[i])
			while (needle[i] == haystack[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
		haystack++;
	}
	return ('\0');
}
