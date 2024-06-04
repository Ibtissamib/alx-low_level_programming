# include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 1000
#define MAX_RESULT_LENGTH 1000

/**
  * main- entry point
  * @argc : int
  * @argv: char**
  * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char command[MAX_COMMAND_LENGTH];
	char result[MAX_RESULT_LENGTH];
	FILE *fp;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <number1> <number2>\n", argv[0]);
		return (1);
	}
snprintf(command, sizeof(command), "printf '(%s) * (%s)' | bc", argv[1],
		argv[2]);
	fp = popen(command, "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error running bc command\n");
		return (1);
	}
	if (fgets(result, sizeof(result), fp) == NULL)
	{
		fprintf(stderr, "Error reading result from bc\n");
		return (1);
	}
	pclose(fp);
	printf("Result: %s", result);
	return (0);
}
