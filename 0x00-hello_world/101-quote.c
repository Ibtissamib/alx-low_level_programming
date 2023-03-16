#include <stdio.h>
/**
 * main - Entry point
 *
 * prints with putchar
 * Return: 1 (success)
 */
int main(void)
{
int i;
char t[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
for (i = 0; t[i] != '\0' ; i++)
	putchar(t[i]);
return (1);
}

