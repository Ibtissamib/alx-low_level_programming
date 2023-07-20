#include "shell.h"
#include <string.h>
/**
 * strtoc
 * @str: pointer to char
 *
 * Return: pointer to character chain
 */
/**char *_strtoks(char *s, ssize_t nlines)
{
	char **p;
	int i = 0, j = 0, k = 0, l = 0, m = 0, nbr;
	static int n;
	static char *str = NULL;

	if (s != NULL)
		str = s;
	else
		n++;

	if (str == NULL || *str == '\0')
		return (NULL);
	nbr = nbr_wrds(str, nlines);
	if (nbr == 0)
		return (NULL);
	p = (char **)malloc((nbr + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	while (k < nbr)
	{
		while (str[j] && str[j] == ' ')
			j++;
		m = j;
		while (str[j] && str[j] != ' ')
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
		for (l = 0 ; l < i; l++, m++)
			p[k][l] = str[m];
		p[k][l] = '\0';
		i = 0;
		k++;
	}
	p[k] = NULL;
	return (p[n]);
}
char *_strtokp(char *s, ssize_t nlines)
{
	char **p;
	int i = 0, j = 0, k = 0, l = 0, m = 0, nbr;
	static int n;
	static char *str = NULL;

	if (s != NULL)
		str = s;
	else
		n++;

	if (str == NULL || *str == '\0')
		return (NULL);
	nbr = nbr_wrdp(str, nlines);
	if (nbr == 0)
		return (NULL);
	p = (char **)malloc((nbr + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	while (k < nbr)
	{
		while (str[j] && str[j] == ':')
			j++;
		m = j;
		while (str[j] && str[j] != ':')
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
		for (l = 0 ; l < i; l++, m++)
			p[k][l] = str[m];
		p[k][l] = '\0';
		i = 0;
		k++;
	}
	p[k] = NULL;
	return (p[n]);
}*/
