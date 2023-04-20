#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all- returns the sum of all its parameters.
 * @n: const unsigned inteteger
 * @...: Integers to sum
 *
 * Return: Integer
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list nbrs;

	if (n == 0)
		return (0);
	va_start(nbrs, n);
	while (i > 0)
	{
		s = s + va_arg(nbrs, int);
		i--;
	}
	va_end(nbrs);
	return (s);
}
