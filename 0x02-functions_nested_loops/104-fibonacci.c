#include<stdio.h>
/**
 * main-Entry point
 *
 * Return: Always Success 0
 */
int main(void)
{
	int i;
	long int f1, f2, f3, p1f1, p1f2, p1f3, p2f1, p2f2, p2f3, rest;

	i = 3;
	f1 = 1;
	f2 = 2;
	printf("%ld, %ld", f1, f2);
	while (i <= 91)
	{
		f3 = f1 + f2;
		printf(", %ld", f3);
		f1 = f2;
		f2 = f3;
		i++;
	}
	p1f2 = f2 / 10000000000;
	p2f2 = f2 % 10000000000;
	p1f1 = f1 / 10000000000;
	p2f1 = f1 % 10000000000;
	for (i = 92; i <= 98; i++)
	{
		p2f3 = (p2f1 + p2f2) % 10000000000;
		rest = (p2f1 + p2f2) / 10000000000;
		p1f3 = p1f2 + p1f1 + rest;
		printf(", %ld%ld", p1f3, p2f3);
		p1f1 = p1f2;
		p2f1 = p2f2;
		p1f2 = p1f3;
		p2f2 = p2f3;
	}
	printf("\n");
	return (0);
}
