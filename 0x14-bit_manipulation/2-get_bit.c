#include "main.h"
/**
 * get_bit- returns the value of a bit at a given index.
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int l;

	if ((n == 0 || n == 1) && index == 0)
		return (n);
	else if ((n == 0 || n == 1) && index != 0)
		return (0);
	while (n > 0)
	{
		l = n % 2;
		n = n / 2;
		if (index == i)
			return (l);
		i++;
	}
	if (index == i)
		return (0);
	else
		return (-1);
}
