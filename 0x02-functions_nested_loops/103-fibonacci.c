#include<stdio.h>
/**
 * main-Entry point
 *
 * Return: Always Success 0
 */
int main(void)
{
	int i, a;
	long int t[50];
	long int sum;

	t[0] = 1;
	t[1] = 2;
	sum = t[1];
	i = 0;
	a = 0;
	while (a == 0)
	{
		t[i + 2] = t[i] + t[i + 1];
		if (t[i + 2] > 4000000)
		a = 1;
		else if ((t[i + 2] % 2) == 0)
			sum = sum + t[i + 2];
		i++;
	}
	printf("%li\n", sum);
	return (0);
}
