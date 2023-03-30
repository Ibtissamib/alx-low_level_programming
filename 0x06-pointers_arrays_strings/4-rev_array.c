#include "main.h"
/**
 * reverse_array- reverses the content of an array of integers.
 * @a: pointer to Integer
 * @n: Integer
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int b, i = 1;
	int *p = a;

	while (i < n)
	{
		p++;
		i++;
	}
	i = 1;
	while (i <= n / 2)
	{
		b = *p;
		*p = *a;
		*a = b;
		a++;
		p--;
		i++;
	}
	a = a + 1 - i;
}
