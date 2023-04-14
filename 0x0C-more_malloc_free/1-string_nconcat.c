#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat- concatenates two strings.
 * @s1: pointer to char
 * @s2: pointer to char
 * @n: unisgned integer
 *
 * Return: pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	if (n < len2)
		s = malloc(len1 + n + 1);
	else
		s = malloc(len1 + len2 + 1);
	if (s == NULL)
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j] && n > 0)
	{
		s[i] = s2[j];
		i++;
		j++;
		n--;
	}
	s[i] = '\0';
	return (s);
}
