#include "main.h"
/**
 * infinite_add- adds two numbers.
 * @n1: pointer to char
 * @n2: pointer to char
 * @r: pointer to char
 * @size_r: int
 *
 * Return: pointer to char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int s = 0, len1 = 0, len2 = 0;

	while (*(n1 + len1) != '\0')
		len1++;
	while (*(n2 + len2) != '\0')
		len2++;
	if ((size_r <= len1 + 1) || (size_r <= len2 + 1))
		return (0);
	*(r + size_r) = '\0';
	n1 = n1 + len1 - 1;
	n2 = n2 + len2 - 1;
	r = r + size_r - 1;
	while (*n1 && *n2)
	{
		s = (*n1 - '0') + (*n2 - '0') + (s / 10);
		*r = (s % 10) + '0';
		n1--;
		n2--;
		r--;
	}
	if (!(*n1))
		while (*n2)
		{
			s = (*n2 - '0') + (s / 10);
			*r = (s % 10) + '0';
			n2--;
			r--;
		}
	else if (!(*n2))
		while (*n1)
		{
			s = (*n1 - '0') + (s / 10);
			*r = (s % 10) + '0';
			n1--;
			r--;
		}
	*r = (s / 10) + '0';
	return (r);
}
