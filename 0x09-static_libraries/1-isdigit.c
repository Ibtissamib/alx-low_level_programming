#include "main.h"
/**
 * _isdigit- checks for a digit (0 through 9).
 * @c: Integer to check
 *
 * Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
	int i = '0';
	int find = 0;

	while (i <= '9')
	{
		if (c == i)
		{
			find = 1;
			break;
		}
		else
			i++;
	}
	return (find);
}
