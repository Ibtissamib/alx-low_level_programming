#include "main.h"
#include <stdio.h>
/**
 * main- Entry point
 * @argc: Integer
 * @argv :pointer to character chain
 *
 * Return: 0 if Success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int m1 = 0, m2 = 0, m, s = 1;

	if (argc - 1 != 2)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}
	else
	{
		if (*argv[1] == '-')
		{
			argv[1]++;
			s = s * (-1);
		}
		while (*(argv[1] + 1))
		{
			m1 = m1 * 10 + (*argv[1] - '0');
			argv[1]++;
		}
		m1 = m1 * 10 + (*argv[1] - '0');
		if (*argv[2] == '-')
		{
			argv[2]++;
			s = s * (-1);
		}
		while (*(argv[2] + 1))
		{
			m2 = m2 * 10 + (*argv[2] - '0');
			argv[2]++;
		}
		m2 = m2 * 10 + (*argv[2] - '0');
		m = s * m1 * m2;
		printf("%d\n", m);
	}
	return (0);
}

