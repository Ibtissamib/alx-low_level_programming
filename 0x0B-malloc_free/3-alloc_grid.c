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
	p = (int **)malloc(width * sizeof(int *));
	while (j < height)
	{
		p[j] = (int *)(malloc(sizeof(int) * width));
		j++;
	}
	if (p == NULL)
		return (NULL);
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
