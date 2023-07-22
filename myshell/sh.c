#include "shell.h"
/**
 * main - starting point
 * Description: Simple shell interpreter function
 * Return: 0 if Success
*/
int main(void)
{char *userinput = NULL, *s = NULL, *cop = NULL;
ssize_t nlines = 0, ncop = 0;
size_t nline = 0;
pid_t process_pid1, process_pid2;
int i = 0, inter_mode = isatty(STDIN_FILENO);
if (!inter_mode)
{	nlines = getline(&userinput, &nline, stdin);
	cop = userinput;
	ncop = nlines;
	s = call_fork(cop, ncop);
	if (_strcmp(userinput, "exit") == 0)
		;
	else if (_strcmp(userinput, "env") == 0)
		for (i = 0; environ[i]; i++)
			write(STDOUT_FILENO, str_concat(environ[i], "\n"), _strlen(environ[i]) + 1);
	 else if (_finder_slash(userinput, nlines) == 1)
		 sh_cmd(userinput, nlines);
	else if (s != NULL)
		_path_handler(userinput, nlines);
}
while (inter_mode)
{
	if (nlines != -1)
	{write(STDOUT_FILENO, "#cisfun$ ", 10);
	nlines = getline(&userinput, &nline, stdin);
	s = call_fork(userinput, nlines);
	}
	if (nlines == -1)
	{
		if (feof(stdin))
		{write(STDOUT_FILENO, "\n", 1);
		break; }
		else
			break; }
	else if (_strcmp(userinput, "\n") == 0)
		;
	else if (_strcmp(userinput, "env") == 0)
		for (i = 0; environ[i]; i++)
			write(STDOUT_FILENO, str_concat(environ[i], "\n"), _strlen(environ[i]) + 1);
	else if (_strcmp(userinput, "exit") == 0)
		break;
	else if (_finder_slash(userinput, nlines) == 1)
	{
		process_pid1 = fork();
		if (process_pid1 == -1)
			perror("fork");
		else if (process_pid1 == 0)
		{
			sh_cmd(userinput, nlines);

		}
		else
			wait(NULL);
	}
	if (s != NULL)
	{
		process_pid2 = fork();
		if (process_pid2 == -1)
			perror("fork");
		else if (process_pid2 == 0)
		{
			_path_handler(userinput, nlines);
		}
		else
			wait(NULL);
	}

}

	free(userinput);
	return (0); }
