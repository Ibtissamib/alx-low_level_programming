#include<stdio.h>
/**
 * main- Entry point, prints numbers from 1 to 100, But Fizz instead
 * of multiples of 3 and Buzz instead of multiples of 5
 *
 * Return: Always Success 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
			printf("%s", "FizzBuzz");
		else if ((i % 5) == 0)
			printf("%s", "Buzz");
		else if ((i % 3) == 0)
			printf("%s", "Fizz");
		else
			printf("%d", i);
		if (i == 100)
			printf("\n");
		else
			printf(" ");
	}
		return (0);
}
