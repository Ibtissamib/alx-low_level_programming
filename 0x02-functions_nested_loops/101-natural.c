#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always Success 0
 */
int main(void)
{
	int i, j, m3, m5, d3, d5, sum;

	d3 = 341;
	d5 = 204;
	sum = 0;
	for (i = 1; i <= d3; i++)
	{
		m3 = 3 * d3;
		sum = sum + m3;
	}
	for (j = 1; j <= d5; j++)
	{
		m5 = 3 * d3;
		sum = sum + m5;
	}
	printf("%d\n", sum);

	return (0);
}
