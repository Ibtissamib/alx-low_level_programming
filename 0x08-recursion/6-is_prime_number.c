#include "main.h"
/**
 * is_prime_number- returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: Integer
 * @i: Integer
 *
 * Return: Integer
 */
int prime(int n, int i);
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime- determine if n is prime number or not
 * @n: Integer
 * @i: Integer
 *
 * Return: Integer
 */
int prime(int n, int i)
{
	if ((n > 1) && (i >= n - 1))
		return (1);
	else if (((n % i) == 0) || (n <= 1))
		return (0);
	else
		return (prime(n, i + 1));

}
