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
	while (format[i])
	{
		while (format[i] != 's' && format[i] != 'c' && format[i] != 'i'
				&& format[i] != 'f')
			i++;
		if (format[i] == 'c')
		{
			c = va_arg(ap, int);
			printf("%c, ", c);
		}
		else if (format[i] == 'i')
		{
			a = va_arg(ap, int);
			printf("%d, ", a);
		}
		else if (format[i] == 'f')
		{
			b = va_arg(ap, double);
			printf("%f, ", b);
		}
		else
		{
			s = va_arg(ap, char *);
			if (s == NULL)
				printf("nil");
			else
				printf("%s", s);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
