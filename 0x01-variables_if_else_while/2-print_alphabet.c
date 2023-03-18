#include <stdio.h>
/**
 * main - Entry point
 *
 * prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char t[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};

int i = 0;

for (i = 0; t[i] != '\0'; i++)
	putchar (t[i]);
putchar('\n');
	return (0);
}
