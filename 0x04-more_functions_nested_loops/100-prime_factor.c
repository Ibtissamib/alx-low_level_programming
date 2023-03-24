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
	long int i = 2, j = 2;
	long int largest = 1;
	long int m = 1;
	long int n = 612852475143;

	while (i <= (n / m))
	{
		while (j <= i)
			if ((i % j) != 0)
				j++;
			else
				break;
		if ((j >= i) && ((n % i) == 0))
		{
			largest = i;
			while (((n / m) % largest) == 0)
				m = m * largest;
		}
		j = 2;
		i = i + 1;
	}
	printf("%ld\n", largest);
	return (0);
}
