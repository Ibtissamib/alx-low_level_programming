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
	if (str[j] != '\0')
		j++;
	while (str[j] != '\0')
	{
		if ((str[j] == ' ') && (str[j - 1] != ' '))
			len++;
		j++;
	}
	if (str[j - 1] != ' ')
		len++;
	return (len);
}
char **strtow(char *str)
{
	char **p;
	int i = 0, j = 0, k = 0, l = 0, nbr = 0;

	nbr = nbr_wrd(str);
	printf("taille %d\n", nbr);
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
		while (str[j] == ' ')
		       j++;
		while (str[j] != ' ')
		{
			i++;
			j++;
		}
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
			printf("success %d taille %d\n", k, i + 1);
		i = 0;
		k++;
	}
	k = 0;
	l = 0;
	j = 0;
	while (k < nbr) 
	{
		while (str[j] == ' ')
			j++;
		while (str[j] != ' ')
		{
			p[k][l] = str[j];
			l++;
			j++;
		}
		p[k][l] = '\0';
		l = 0;
		k++;
	}
	return (p);
}
