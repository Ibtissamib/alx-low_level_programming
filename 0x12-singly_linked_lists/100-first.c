#include "lists.h"
#include <stdio.h>
/**
 * before_main - function to be called before main
 * Description: This function is automatically called before the main
 *              function is executed, and prints a message to the console.
 * Return: void
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
