#include "main.h"
/**
 * _isalpha- Checks for alphabetic character.
 * @c: character to check
 *
 * Return: 1 if c is a letter lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	char al;

	al = 'a';
	while ((c != al) && (al <= 'z'))
		al++;
	if (c != al)
	{
		al = 'A';
		while ((c != al) && (al <= 'Z'))
			al++;
	}
	if (c == al)
		return (1);
	else
		return (0);
}

