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
	int a, i = 0;
	double b;
	char c;
	char *s;
	va_list ap;

	va_start(ap, format);
	if (format == NULL)
		return;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(ap, int);
				printf("%c, ", c);
				i++;
				break;
			case 'i':
				a = va_arg(ap, int);
				printf("%d, ", a);
				i++;
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				i++;
				break;
			case 'f':
				b = va_arg(ap, double);
				printf("%f, ", b);
				i++;
				break;
			default:
				i++;
				break;
		}
	}
	printf("\n");
	va_end(ap);
}
