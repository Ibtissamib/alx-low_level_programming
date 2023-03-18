#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 56; i++)
	{
		putchar (i);
		putchar (',');
		putchar(' ');
	}
	putchar (57);
	putchar ('\n');
	return (0);
}
