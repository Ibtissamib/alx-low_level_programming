#include "main.h"
/**
 * flip_bits- returns the number of bits you would need to flip to get from one
 * number to another.
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned int index = 0, i = 0;

	a = n ^ m;
	while(index < 64)
	{
		if (a & (1L << index))
			i++;
		index++;
	}
	return (i);
}
