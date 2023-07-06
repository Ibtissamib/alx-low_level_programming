#include "main.h"
/**
 * binary_to_uint-  converts a binary number to an unsigned int
 * @b: pointer to char
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, find = 0, p = 1;
	unsigned int n = 0;

	if (!b || !b[0])
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			find = 1;
			break;
		}
		i++;
	}
	if (find == 1)
		return (0);
	i--;
	while (i >= 0)
	{
		n = n + ((b[i] - '0') * p);
		i--;
		p = p * 2;
	}
	return (n);
}
