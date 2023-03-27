#include "main.h"
/**
 * print_rev-prints a string, in reverse, followed by a new line.
 * @s: pointer on Char
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	while (l != 0)
	{
		_putchar(*s);
		s--;
		l--;
	}
	_putchar('\n');
}
