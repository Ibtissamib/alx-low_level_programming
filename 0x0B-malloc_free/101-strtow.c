#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow- splits a string into words
 * @str: pointer to char
 *
 * Return: pointer to character chain
 */
int nbr_wrd(char *str)
{
	int len = 0, j = 0;
	while (str[j] != '\0')
	{
		if (str[j] == ' ')
			len++;
		j++;
	}
	len++;
	return (len);
}
char **strtow(char *str)
{
	char **p;
	int i = 0, j = 0, k = 0, nbr = 0;

	nbr = nbr_wrd(str);
	if (str == NULL)
		return (NULL);
	p = (char **)malloc(nbr * sizeof(char *));
	if (p == NULL)
	{
		printf("error\n");
		return (NULL);
	}
	else
		printf("sucess\n");
	while (k < nbr)
	{
		if ((str[j] == ' ') || (str[j] == '\0'))
		{
			p[k] = (char *)malloc(sizeof(char) * (i + 1));
			if (p[k] == NULL)
			{
				while (k >= 0)
				{
					free(p[k]);
					k--;
				}
				free(p);
			}
			else
				printf("success %d taille %d\n", k, i);
			i = 0;
			k++;
		}
		else
			i++;
		j++;
	}
	k = 0;
	i = 0;
	j = 0;
	while (k < nbr) 
	{
		while (str[j] != ' ')
		{
			p[k][i] = str[j];
			i++;
			j++;
		}
		if (str[j] == ' ')
			j++;
		p[k][i] = '\0';
		i = 0;
		k++;
	}
	return (p);
}
