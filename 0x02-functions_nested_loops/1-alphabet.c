#include "main.h"
/**
 * print_alphabet- Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Void.
 */
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
		_putchar(al);
	_putchar('\n');
}
