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
	(void) argc;
	while (*argv[0])
	{	_putchar(*argv[0]);
		argv[0]++;
	}
	_putchar('\n');
	return (0);
}
