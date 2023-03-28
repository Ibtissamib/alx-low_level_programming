#include "main.h"
/**
 * puts_half- prints half of a string, followed by a new line.
 * @str: pointer to char
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int i = 1, len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	while (i <= len / 2)
	{
		str--;
		i++;
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
