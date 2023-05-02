#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * nbr_types-returns number of types in format
 * @format: const pointer to char
 * @n: number of types
 * @i: integer to increment
 *
 * Return: Integer
 */
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
 * print_types-prints
 * @format: const pointer to char
 * @n: Integer, nbr of types
 * @i: Integer to increment
 * @j: Integer 1 if type is found 0 otherwise, helps to decide to print ", "
 * @k: Integer to increment, helps to decide to print ", " or no
 * @a: Integer to print
 * @b: float to print
 * @c: char to print
 * @s: pointer to char to print
 * @ap: va_list
 *
 * Return: void
 */
void print_types(const char *format, int n, int i, int j, int k, int a, float b
		, char c, char *s, va_list ap)
{
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
				printf("%s", (s == NULL || s[0] == '\0') ? "(nil)" : s);
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
	int a = 0, n;
	float b = 0;
	char c = 'c', *s = "ab";
	va_list ap;

	if (format == NULL || format[0] == '\0')
	{
		printf("\n");
		return;
	}
	va_start(ap, format);
	n = nbr_types(format, 0, 0);
	print_types(format, n, 0, 0, 0, a, b, c, s, ap);
	printf("\n");
	va_end(ap); }
