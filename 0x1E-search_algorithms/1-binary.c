#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_search- searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to int
 * @size: size_t
 * @value: int
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{

	size_t left = 0;
	size_t right = size - 1;
	size_t mid, i;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
	while (left <= right)
	{
		mid = (right + (right - left)) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}

	}
	return (-1);
}
