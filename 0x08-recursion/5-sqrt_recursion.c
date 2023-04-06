#include "main.h"
/**
 * _sqrt_recursion- returns the natural square root of a number
 * @n: Integer
 * @i: Integer
 *
 * Return: Integer
 */
int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt- returns the natural square root of a number
 * to avoid prob of initialisation and incrementation of i
 * @n: Integer
 * @i: Integer
 *
 * Return: Integer
 */
int _sqrt(int n, int i)
{
	if ((n % i == 0) && (n / i == i))
			return (i);
	else if (i < n)
		return (_sqrt(n, i + 1));
	else
		return (-1);
}
