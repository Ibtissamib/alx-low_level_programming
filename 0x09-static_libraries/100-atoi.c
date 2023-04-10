#include "main.h"
#include <stdio.h>
/**
 * _atoi-  convert a string to an integer.
 * @s: pointer to char
 *
 * Return: Integer
 */
int _atoi(char *s)
{
	int a = 1, b = 0, i = '0';

	while (*s != '\0')
	{
		while (i <= '9')
		{
			if (*s != i)
				i++;
			else
				break;
		}
		if ((i > '9') && (b == 0))
		{
			i = '0';
			if (*s == '-')
			{
				a = -a;
				s++;
			}
			else
				s++;
		}
		else if (i <= '9')
		{
			if (a > 0)
				b = (b * 10) + (i - '0');
			else
				b = (b * 10) - (i - '0');
			i = '0';
			s++;
		}
		else
			break;
	}
	return (b);
}
