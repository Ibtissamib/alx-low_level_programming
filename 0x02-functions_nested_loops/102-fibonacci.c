#include<stdio.h>
/**
 * main-Entry point
 *
 * Return: Always Success 0
 */
int main(void)
{
	int i;
	long int t[50];

	t[0] = 1;
	t[1] = 2;
	printf("%ld, %ld", t[0], t[1]);
	for (i = 0; i < 48; i++)
	{
		t[i + 2] = t[i] + t[i + 1];
		printf(", %ld", t[i + 2]);
	}
	printf("\n");
	return (0);
}
