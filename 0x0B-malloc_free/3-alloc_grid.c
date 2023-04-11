#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid- returns a pointer to a 2 dimensional array of integers.
 * @width: Integer
 * @height: Integer
 *
 * Return: double pointer to Integer
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **p;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);
	while (j < width)
	{
		p[j] = (int *)(malloc(sizeof(int) * width));
		if (p[j] == NULL)
			return (NULL);
		j++;
	}
	j = 0;
	while (i < width)
	{
		while (j < height)
		{
			p[i][j] = 0;
			j++;
		}
		i++;
	}
	return (p);
}
