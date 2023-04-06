#include "main.h"
#include <stdio.h>
/**
 * is_palindrome- returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to char
 *
 * Return: Integer
 */
int _len(char *s);
int is_p(char *s, int i);
int is_palindrome(char *s)
{
	return (is_p(s, 0));
}
/**
 * _len- returns length of character chain
 * @s: pointer to char
 *
 * Return: Integer
 */
int _len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _len(s + 1));
}
/**
 * is_p- Recursive function to avoid declaration nd initialisation of i
 * @s: pointer to char
 * @i: Integer
 *
 * Return: Integer
 */
int is_p(char *s, int i)
{
	if ((_len(s) <= 1) || (i >= (_len(s) + 1) / 2))
		return (1);
	else if (*(s + i) == *(s + _len(s) - 1 - i))
	{
		return (is_p(s, i + 1));
	}
	else
		return (0);
}
