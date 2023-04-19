#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator- executes a function given as a parameter
 * on each element of an array.
 * @array: pointer to int
 * @size array size
 * @action: fuction pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *p = array + size - 1;

	if (array && size && action)
		while (array <= p)
			action(*array++);
}
