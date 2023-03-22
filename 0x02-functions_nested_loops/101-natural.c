#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always Success 0
 */
int main(void)
{
	int i, m3, m5, sum;

	sum = 0;
	for (i = 1; i <= 341; i++)
	{
		m3 = 3 * i;
		sum = sum + m3;
	}
	for (i = 1; i <= 204; i++)
	{
		m5 = 5 * i;
		sum = sum + m5;
	}
	for (i = 1; i <= 68; i++)
		sum = sum - (15 * i);
	printf("%d\n", sum);
	return (0);
}
