#include "simple_shell.h"
/**
 * add_path - this functions concatenates the path with the cmd
 * @tokens: the cmd the person introduces
 * @tok_path: the path
 * Return: the path concatenated in position 0 of the array.
 */
char *add_path(char **tokens, char **tok_path)
{
	char *cmd;
	int i = 0;
	struct stat stat_buf;

	while (tok_path[i])
	{
		cmd = _strcat(tok_path[i], tokens[0]);
		if (stat(cmd, &stat_buf) == 0)
		{
			tokens[0] = cmd;
			break;
		}
		i++;
	}

	return (tokens[0]);
}
