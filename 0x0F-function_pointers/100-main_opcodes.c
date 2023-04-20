#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main- Entry point
 * @argc: Integer
 * @argv: pointer to character chain
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	char *s = (char *)main;
	int nbr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbr = atoi(argv[1]);
	if (nbr < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (nbr--)
	{
		printf("%02hhx%s", *s++, nbr ? " " : "\n");
	}
	return (0);
}
