#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print- prints character chain
 * @s: pointer to char
 * Return: void
 */
void print(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
/**
 * _nbr- from character chain to integer
 * @s: pointer to char
 *
 * Return: Integer
 */
int _nbr(char *s)
{
	int i = 0, a = 0;
	int sign = 1;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i])
	{
		a = a * 10 + (s[i] - '0');
		i++;
	}
	return (a * sign);
}
/**
 * _decimal- if it's valid number
 * @s: pointer to char
 *
 * Return: Integer
 */
int _decimal(char *s)
{
	int d = 1;
	int i = 1;

	if (s[i] == '-')
		i++;
	while (s[i] != '\0')
	{
		if ((s[i] < '0') || (s[i] > '9'))
		{
			d = 0;
			break;
		}
		i++;
	}
	return (d);
}
/**
 * ntochar- from Integer to character chain
 * @mul: Integer
 *
 * Return: character chain
 */
char *ntochar(int mul)
{
	char *s;
	int i = 0;
	int size = 1;
	int m = mul;
	int multi = mul;

	if (mul < 0)
	{
		size++;
		mul = -mul;
		m = mul;
	}
	while (m > 9)
	{
		size++;
		m = m / 10;
	}
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	while (mul / 10)
	{
		s[i] = (mul % 10) + '0';
		mul = mul / 10;
		i++;
	}
	s[i] = mul + '0';
	if (multi < 0)
	{
		s[i + 1] = '-';
		s[i + 2] = '\0';
	}
	else
		s[i + 1] = '\0';
	return (s);
}
/**
 * rev- reverse character chain
 * @s: pointer to char
 *
 * Return: pointer to char
 */
char *rev(char *s)
{
	char a;
	char *s2;
	int len = 0, i = 0;

	while (s[len])
		len++;
	s2 = s + (len - 1);
	while (s < s2)
	{
		a = *s;
		*s = *s2;
		*s2 = a;
		s++;
		i++;
		s2--;
	}
	s = s - i;
	return (s);
}
/**
 * main- multiplies two positive numbers.
 * @argc: Integer
 * @argv: pointer to character chain
 *
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	int mul;
	int d1, d2;
	char *s;

	if (argc != 3)
	{
		print("Error");
		exit(98);
	}
	d1 = _decimal(argv[1]);
	d2 = _decimal(argv[2]);
	if ((d1 == 0) || (d2 == 0))
	{
		print("Error");
		exit(98);
	}
	mul = (_nbr(argv[1]) * _nbr(argv[2]));
	s = rev(ntochar(mul));
	print(s);
	return (0);
}
