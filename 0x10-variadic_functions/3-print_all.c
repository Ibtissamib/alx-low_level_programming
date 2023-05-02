#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all- prints anything.
 * @format: conts pointer to const char
 * @...: something to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int a, n = 0, i = 0, j = 0, k = 0;
	double b;
	char c;
	char *s;
	va_list ap;

	va_start(ap, format);
	if (format == NULL)
		printf("(nil)");
	while (format[i])
	{	if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			format[i] == 's')
			n++;
		i++; }
	i = 0;
	while (format[i])
	{	switch (format[i])
		{	case 'c':
				c = va_arg(ap, int);
				printf("%c", c);
				j = 1;
				i++;
				k++;
				break;
			case 'i':
				a = va_arg(ap, int);
				printf("%d", a);
				j = 1;
				i++;
				k++;
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				i++;
				j = 1;
				k++;
				break;
			case 'f':
				b = va_arg(ap, double);
				printf("%f", b);
				j = 1;
				i++;
				k++;
				break;
			default:
				i++;
				j = 0;
				break; }
	if (j == 1 && k < n)
		printf(", "); }
	printf("\n");
	va_end(ap); }
