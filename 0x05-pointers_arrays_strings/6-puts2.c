#include "main.h"
/**
 * puts2- prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: pointer to char
 *
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		if (*(str + 1) != '\0')
			str = str + 2;
		else
			str = str + 1;
	}
	_putchar('\n');
}
