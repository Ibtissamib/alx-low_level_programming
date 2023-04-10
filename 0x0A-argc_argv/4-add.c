#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main- Entry point
 * @argc: Integer
 * @argv: pointer to character chain
 *
 * Return: 0 if Success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, ad = 0, s[4] = {0};
	unsigned int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			s[i] = s[j] * 10 + (argv[i][j] - '0');
		}
		ad = ad + s[i];
	}
	printf("%d\n", ad);
	return (0);
}
