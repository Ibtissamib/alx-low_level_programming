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

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	printf("%d et %d \n", len1, len2);
	s = malloc(len1 + n);
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
	return (s);
}
