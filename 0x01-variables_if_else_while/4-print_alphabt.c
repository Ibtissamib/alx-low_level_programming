#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
			i++;
		putchar (i);
		i++;
	}
	putchar ('\n');
	return (0);
}
