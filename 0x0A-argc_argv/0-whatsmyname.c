#include "main.h"
/**
 * main- Entry point
 * @argc: integer
 * @argv: pointer to character chain
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		while (*argv[i])
		{
			_putchar(*argv[i]);
			argv[i]++;
		}
	_putchar('\n');
	return (0);
}
