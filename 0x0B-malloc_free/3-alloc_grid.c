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
	p = malloc(height * sizeof(*p));
	if (p == NULL)
		return (NULL);
	while (i < height)
	{
		p[i] = malloc(sizeof(**p) * width);
		if (p[i] == NULL)
		{
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
		i++;
	}
	return (p);
}
