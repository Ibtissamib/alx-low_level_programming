#include "shell.h"
char *call_fork(char *cop, ssize_t ncop)
{
	char *b, *cmd,  *path_cmd, *path, *s, *s_slash;
	ssize_t i = 0, matrix_size = 0;
	
	matrix_size = nbr_wrd(cop, ncop);
	b = strtok(cop, " ");
	if (matrix_size == 1)
        {
                cmd = (char *)malloc(sizeof(char) * _strlen(b));
                for (i = 0; i < (_strlen(b) - 1); i++)
                        cmd[i] = b[i];
                cmd[i] = '\0';
        }
        else
		cmd = _strdup(b);
	path = _getenv("PATH");
	path_cmd = strtok(path, ":");
	s_slash = str_concat(path_cmd, "/");
	s = str_concat(s_slash, cmd);
	while (path_cmd != NULL)
	{
		if (access(s, F_OK) == 0)
		{	return (s);
		}
		path_cmd = strtok(NULL, ":");
		s_slash = str_concat(path_cmd, "/");
		s = str_concat(s_slash, cmd);
	}
	return (NULL);

}	
/**
 * _path_handler-handles path
 * @userinput: pointer to char
 * @nlines: ssize_t
 * Return: void
*/
void _path_handler(char *userinput, ssize_t nlines)
{
	ssize_t j = 0, i = 0, matrix_size = 0;
	char **argv, *b, *cmd, *path, *path_cmd, *s_slash, *s;

	matrix_size = nbr_wrd(userinput, nlines);
	argv = (char **)malloc(sizeof(char *) * (matrix_size + 1));
	b = strtok(userinput, " ");
	if (j == matrix_size - 1)
        {
                cmd = (char *)malloc(sizeof(char) * _strlen(b));
                for (i = 0; i < (_strlen(b) - 1); i++)
                        cmd[i] = b[i];
                cmd[i] = '\0';
        }
	else
		cmd = _strdup(b);
	b = strtok(NULL, " ");
	for (j = 1; j < matrix_size; j++)
	{
		if (j == matrix_size - 1)
		{argv[j] = (char *)malloc(sizeof(char) * _strlen(b));
			for (i = 0; i < (_strlen(b) - 1); i++)
				argv[j][i] = b[i];
			argv[j][i] = '\0'; }
		else
			argv[j] = _strdup(b);
		b = strtok(NULL, " "); }
	
	path = _getenv("PATH");
	path_cmd = strtok(path, ":");
	s_slash = str_concat(path_cmd, "/");
	s = str_concat(s_slash, cmd);
	while (path_cmd != NULL)
	{
		if (access(s, F_OK) == 0)
		{	argv[0] = _strdup(s);
			break;
		}
		path_cmd = strtok(NULL, ":");
		s_slash = str_concat(path_cmd, "/");
		s = str_concat(s_slash, cmd);
	}
	
	argv[j] = NULL;
	if (execve(argv[0], argv, NULL) == -1)
	{
		write(STDOUT_FILENO, "sh: command: not found\n", 24);
		exit(EXIT_FAILURE);
	}
	if (argv != NULL)
	{
		for (j = 0; j <= matrix_size; j++)
			free(argv[j]);
		free(argv);
	}
	free(b);
	free(cmd);
	free(path);
	free(path_cmd);
	free(s);
	free(s_slash);
}
int _finder_slash(char *userinput, ssize_t nlines)
{
	int i;

	for (i = 0; (userinput[i] != ' ' && i < nlines); i++)
	{
		if (userinput[i] == '/')
			return (1);
	}
	return (0);

}
/**
 * sh_cmd- executes commands
 * @userinput: pointer to the userinput
 * @nlines: lenght of userinput
 * Return: void
*/ 
void sh_cmd(char *userinput, ssize_t nlines)
{char **argv;
	ssize_t j = 0, i = 0;
	ssize_t matrix_size = 0;
	char *b;

	matrix_size = nbr_wrd(userinput, nlines);
	argv = (char **)malloc(sizeof(char *) * (matrix_size + 1));
	b = strtok(userinput, " ");
	if (j == matrix_size - 1)
	{
		argv[j] = (char *)malloc(sizeof(char) * _strlen(b));
		for (i = 0; i < (_strlen(b) - 1); i++)
			argv[j][i] = b[i];
		argv[j][i] = '\0';
	}
	else
		argv[j] = _strdup(b);
	b = strtok(NULL, " ");
	for (j = 1; j < matrix_size; j++)
	{
		if (j == matrix_size - 1)
		{argv[j] = (char *)malloc(sizeof(char) * _strlen(b));
			for (i = 0; i < (_strlen(b) - 1); i++)
				argv[j][i] = b[i];
			argv[j][i] = '\0'; }
		else
			argv[j] = _strdup(b);
		b = strtok(NULL, " "); }
	argv[j] = NULL;
	if (execve(argv[0], argv, NULL) == -1)
	{write(STDOUT_FILENO, "sh: command: not found\n", 24);
		exit(EXIT_FAILURE); }
	if (argv != NULL)
	{
		for (j = 0; j <= matrix_size; j++)
			free(argv[j]);
		free(argv); }
	free(b); 
}
