#include "main.h"
/**
 * wildcmp- compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * @s1: pointer to char
 * *s2: pointer to char
 * @find: pointer to char
* @c: character
 *
 * Return: Integer
 */
char *_other_char(char *s1, char *find, char c);
int wildcmp(char *s1, char *s2)
{
	if (*s2 && (*s2 == '*'))
		return (wildcmp(s1, s2 + 1));
	else if (*s1 && (*s1 != *s2) && *(s2 - 1) == '*')
		return (wildcmp(s1 + 1, s2));
	else if (*s1 == *s2 && *s1 && *s2)
		return (wildcmp(_other_char(s1, s1, *s2) + 1, s2 + 1));
	else if ((*s1 == '\0' && *s2 == '\0') || (*s1 == '\0' && *s2 == '*')
			|| (*s2 == '\0' && *(s2 - 1) == '*'))
		return (1);
	else
		return (0);
}
/**
 * _other_char- checks if there is an other char beside the first one
 * @s1: pointer to char (where we search)
 * @find: pointer to char (the adress of the found char)
 * @c: Character we're looking for
 *
 * Return: pointer to the last character we ve looking for
 */
char *_other_char(char *s1, char *find, char c)
{
	if ((*s1) && (*s1 != c))
		return (_other_char(s1 + 1, find, c));
	else if (*s1 && *s1 == c)
	{
		find = s1;
		return (_other_char(s1 + 1, find, c));
	}
	else
		return (find);
}
