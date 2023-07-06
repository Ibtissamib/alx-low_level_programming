#include "main.h"
#include <stdio.h>
/**
 * print_binary- prints the binary representation of a number.
 * @n: unsigned long int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int p = 1, p1 = 0;

	if (n == 0 || n == 1)
		_putchar(n + '0');
	else
	{
		while (n >= p)
			p = p * 2;
		while (p1 < p)
		{	p = p - 2;
			p1 = p1 + 2; }
		while (p != 2)
		{	n = n - p;
			_putchar('1');
			p1 = 0;
			while (p1 < p)
			{	p = p - 2;
				p1 = p1 + 2; }
			while (p != 2 && n < p)
			{	_putchar('0');
				 p1 = 0;
				while (p1 < p)
				{	p = p - 2;
					p1 = p1 + 2; } } }
		if (n == 3)
		{	_putchar('1');
			_putchar('1'); }
		else if (n == 2)
		{	_putchar('1');
			_putchar('0'); }
		else if (n == 1)
		{	_putchar('0');
			_putchar('1'); }
		else
		{	_putchar('0');
			_putchar('0'); } } }

