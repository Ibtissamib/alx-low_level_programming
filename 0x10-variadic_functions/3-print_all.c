#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_string(const char *s)
{
	printf("%s", (s == NULL || s[0] == '\0') ? "(nil)" : s);
}
int nbr_types(const char *format, int n, int i)
{

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				n++;
				break;
			case 's':
				n++;
				break;
			case 'i':
				n++;
				break;
			case 'f':
				n++;
				break;
			default:
				break;
		}
		i++;
	}
	return (n);
}

/**
 * print_all- prints anything.
 * @format: conts pointer to const char
 * @...: something to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int a, n, i = 0, j = 0, k = 0;
	float b;
	char c, *s;
	va_list ap;

	if (format == NULL || format[0] == '\0')
		return;
	va_start(ap, format);
	n = nbr_types(format, 0, 0);
	while (format && format[i])
	{	
		switch (format[i])
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
				print_string(s);
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
