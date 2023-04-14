#include "main.h"
#include <stdlib.h>
/**
 * array_range- creates an array of integers.
 * @min: Integer
 * @max: Integer
 *
 * Return: pointer to Integer
 */
int *array_range(int min, int max)
{
	int len;
	int *p;
	int i = 0;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(len * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (i < len)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
