#include "main.h"
/**
 * _strstr-  locates a substring.
 * @haystack: pointer to char
 * @needle: pointer to char
 *
 * Return: poinetr to char
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		for (i = 0; needle[i] == haystack[i]; i++)
		{
			if (needle[i + 1] == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (haystack);
}
