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
	int i = n;
	va_list nbrs;

	if (n == 0 || separator == NULL)
	{
		printf("\n");
		return;
	}
	va_start(nbrs, n);
	while (i--)
		printf("%d%s", va_arg(nbrs, int), i ? (separator ? separator : "") : "\n");
	va_end(nbrs);
}
