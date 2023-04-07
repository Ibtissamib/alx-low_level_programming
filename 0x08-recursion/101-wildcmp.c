#include "main.h"
/**
 * wildcmp- compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * @s1: pointer to char
 * @s2: pointer to char
 * @find: pointer to char
 * @i: Integer
 *
 * Return: Integer
 */
char *_other_char(char *s1, char *s2, char *find, int i);
int wildcmp(char *s1, char *s2)
{
	if (*s2 && (*s2 == '*'))
		return (wildcmp(s1, s2 + 1));
	else if (*s1 && (*s1 != *s2) && *(s2 - 1) == '*')
		return (wildcmp(s1 + 1, s2));
	else if (*s1 == *s2 && *s1 && *s2)
	{
		if (*(s2 - 1) == '*')
			return (wildcmp(_other_char(s1, s2, s1, 1) + 1, s2 + 1));
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
 * _other_char- checks if there is an other char beside the first one
 * @s1: pointer to char (where we search)
 * @s2: pointer to char
 * @find: pointer to char (the adress of the found char)
 * @i: Integer
 *
 * Return: pointer to the last character we ve looking for
 */
char *_other_char(char *s1, char *s2, char *find, int i)
{
	if (*(s2 + i) && *(s2 + i) != *s1)
	{	i = i + 1;
		return (_other_char(s1, s2, find, i));
	}
	else if (*(s2 + i) && *(s2 + i) == *s1)
		return (s1);
	else if (*(s2 + i) == '\0' && *s1 && *s1 != *s2)
		return (_other_char(s1 + 1, s2, find, i));
	else if (*(s2 + i) == '\0' && *s1 && *s1 == *s2)
	{
		find = s1;
		return (_other_char(s1 + 1, s2, find, i));
	}
	else
		return (find);
}
