#include "main.h"
/**
 * print_chessboard- prints the chessboard.
 * @a: pointer to array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 7; j++)
			_putchar(a[i][j] + '\0');
		_putchar('\n');
	}
	for (i = 2; i <= 5; i++)
		_putchar('\n');
	for (i = 6; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
			_putchar(a[i][j] + '\0');
		_putchar('\n');
	}
}
