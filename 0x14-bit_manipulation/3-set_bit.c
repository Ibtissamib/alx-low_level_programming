#include "main.h"
/**
 * set_bit- sets the value of a bit to 1 at a given index.
 * @n: pointer to unsigned long int
 * @index: unsigned int
 *
 * Return: pointer to unsigned long int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);
	if (index >= 64)
		return (-1);
	*n = *n | 1l << index;
	return (1);
}
