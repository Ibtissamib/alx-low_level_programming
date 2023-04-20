#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings- prints strings, followed by a new line.
 * @separator: const pointer to char
 * @n: const unsigned integer
 * @...: Strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *p;
	va_list ch;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ch, n);
	while (i--)
		printf("%s%s", (p = va_arg(ch, char *)) ? p : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ch);
}
