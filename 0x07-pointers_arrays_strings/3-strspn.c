#include "main.h"
#include <stdio.h>
/**
 * _strspn- gets the length of a prefix substring.
 * @s: pointer to char
 * @accept: char
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0, count = 0;

	while (*s)
		{
			while (*accept)
			{
				if (*s == *accept)
				{
					length++;
					break;
				}
				accept++;
				count++;
			}
			accept = accept - count;
			s++;
		}
	return (length);
}
