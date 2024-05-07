#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search- allocates memory using malloc
 * @array: pointer to int
 * @size: size_t
 * @value: int
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i++;
	}
	if (i == size)
		return (-1);
	else
		return (i);
}
