#include "main.h"
/**
 * wildcmp- compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * @s1: pointer to char
 * @s2: pointer to char
 * @c: Char after * in s2
 * @k: number of c duplicates in s2
 * @i: Integer : row of equivalent to c in s1
 * @reach: Integer 1 if reach the end of the string s2 0 otherwise
 *
 * Return: Integer
 */
char *_other_char(char *s1, char *s2, char c, int k, int i, int reach);
int _len(char *s1);
int wildcmp(char *s1, char *s2)
{
	if (*s2 && (*s2 == '*'))
		return (wildcmp(s1, s2 + 1));
	else if (*s1 && (*s1 != *s2) && *(s2 - 1) == '*')
		return (wildcmp(s1 + 1, s2));
	else if (*s1 == *s2 && *s1 && *s2)
	{
		if (*(s2 - 1) == '*')
			return (wildcmp(_other_char(s1, s2, *s2, 0, 0, 0) + 1, s2 + 1));
		else
			return (wildcmp(s1 + 1, s2 + 1));
	}
	else if ((*s1 == '\0' && *s2 == '\0') || (*s1 == '\0' && *s2 == '*')
			|| (*s2 == '\0' && *(s2 - 1) == '*'))
		return (1);
	else
		return (0);
}
/**
 * _other_char- checks the exact equivalent character to c (after * in s2)
 * @s1: pointer to char (where we search)
 * @s2: pointer to char
 * @c: Char after * in s2
 * @k: number of c duplicates in s2
 * @i: Integer : row of equivalent to c in s1
 * @reach: Integer 1 if reach the end of the string s2 0 otherwise
 *
 * Return: pointer to equivalent character to c (after * in s2
 */
char *_other_char(char *s1, char *s2, char c, int k, int i, int reach)
{
	if (*s2 && *s2 == c)
		return (_other_char(s1, s2 + 1, c, k + 1, 0, 0));
	else if (*s2 && *s2 != c)
		return (_other_char(s1, s2 + 1, c, k, 0, 0));
	else if (*s2 == '\0'  && reach == 0 && i < _len(s1))
		return (_other_char(s1, s2, c, k, i + 1, 0));
	else if (*s2 == '\0' && reach == 0 && i == _len(s1))
		return (_other_char(s1, s2, c, k, i - 1, 1));
	else if (*s2 == '\0' && reach == 1 && i >= 0 && *(s1 + i) != c)
		return (_other_char(s1, s2, c, k, i - 1, 1));
	else if (*s2 == '\0' && k != 1  && reach == 1 && i >= 0 && *(s1 + i) == c)
		return (_other_char(s1, s2, c, k - 1, i - 1, 1));
	else
		return (s1 + i);
}
/**
 * _len- gives the length of s1
 * @s1: pointer to char
 *
 * Return: Integer
 */
int _len(char *s1)
{
	if (*s1 != '\0')
		return (1 + _len(s1 + 1));
	else
		return (0);
}
