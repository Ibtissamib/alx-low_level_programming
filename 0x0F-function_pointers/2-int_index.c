#include "function_pointers.h"
/**
 * int_index- searches for an integer.
 * @array: pointer to int
 * @size: Integer
 * @cmp: function pointer
 *
 * Return: Integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
