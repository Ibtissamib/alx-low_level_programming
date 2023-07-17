#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow- splits a string into words
 * @str: pointer to char
 *
 * Return: pointer to character chain
 */
int nbr_wrd(char *str);
char **strtow(char *str)
{
	char **p;
	int i = 0, j = 0, k = 0, l = 0, m = 0, nbr;

	if (str == NULL || *str == '\0')
		return (NULL);
	nbr = nbr_wrd(str);
	if (nbr == 0)
		return (NULL);
	p = (char **)malloc(nbr * sizeof(char *));
	if (p == NULL)
		return (NULL);
	while (k < nbr)
	{
		while (str[j] == ' ')
		{
			j++;
		}
		while(str[j] != ' ')
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
			return (NULL);
		}
		for (l = 0, m = j - i  ; l < i; l++, m++)
			p[k][l] = str[m];
		p[k][l] = '\0';
		i = 0;
		k++;
	}
	return (p);
}
/**
 * nbr_wrd- returns number of words in character chain
 * @str: pointer to char
 *
 * Return: Integer
 */
int nbr_wrd(char *str)
{
	int len = 0, j = 0;

	if (str[0] != ' ')
		len++;
	j = 1;
	while (str[j] != '\0')
	{
		if (str[j] != ' ' &&  str[j - 1] == ' ')
			len++;
		j++;
	}
	return (len);
}

