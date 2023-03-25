#include <stdio.h>
#include <math.h>
/**
 * main- Entry point prints the largest prime factor of
 * the number 612852475143
 *
 * Return: Always Success 0
 */
int main(void)
{
	long int largest = 1;
	long int n = 612852475143;
	long int i = 3;

	while ((n % 2) == 0)
	{
		largest = 2;
		n = n / 2;
	}
	while (i <= sqrt(n))
	{
		while ((n % i) == 0)
		{
			largest = i;
			n = n / i;
		}
		i = i + 2;
	}
	if (n > 2)
		largest = n;
	printf("%ld\n", largest);
	return (0);
}
