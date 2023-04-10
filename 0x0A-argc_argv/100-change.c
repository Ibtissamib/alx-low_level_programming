#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- Entry point
 * @argc: Integer
 * @argv: pointer to Character chain
 *
 * Return: 0 if Success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int cents, i = 0, c = 0, t[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	argv++;
	cents = atoi(*argv);
	while ((cents > 0) && (i <= 4))
	{
		while (cents / t[i])
		{
			cents = cents - t[i];
			c++;
		}
		i++;
	}
	printf("%d\n", c);
	return (0);
}
