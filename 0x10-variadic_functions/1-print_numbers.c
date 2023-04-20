#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers- prints numbers, followed by a new line.
 * @separator: const pointer to char
 * @n: const unsigned integer
 * @...: Integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list nbrs;

	va_start(nbrs, n);
	while (i < n)
	{
		printf("%d", va_arg(nbrs, int));
		if (i != (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(nbrs);
}
