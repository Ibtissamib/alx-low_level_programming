#include "main.h"
/**
 * get_endianness- checks the endianness.
 *
 * Return: Integer
 */
int get_endianness(void)
{
	int a = 1;
	char *c;

	c = (char *) &a;
	if (*c == 1)
		return (1);
	else
		return (0);
	return (0);

}
