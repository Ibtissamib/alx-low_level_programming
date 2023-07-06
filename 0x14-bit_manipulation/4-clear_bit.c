#include "main.h"
/**
 * clear_bit- sets the value of a bit to 0 at a given index.
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);
	if (index >= 64)
		return (-1);
	*n = *n & (~(1l << index));
	return (1);
}
