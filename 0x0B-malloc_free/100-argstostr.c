#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr- concatenates all the arguments of your program.
 * @ac: Integer
 * @av: double pointer to char
 *
 * Return: pointer to char
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i = 0, k, len = 0;
	unsigned int j;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		len = len + strlen(av[i]) + 1;
		printf("%d", len);
		i++;
	}
	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}



