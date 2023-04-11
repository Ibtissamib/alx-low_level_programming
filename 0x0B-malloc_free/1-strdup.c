#include "main.h"
#include <stdlib.h>
/**
 * _strdup- returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: pointer to char
 *
 * Return: pointer to char
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;

	p = malloc(sizeof(str));
	if (p == NULL)
		return (NULL);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
