#include "simple_shell.h"
/**
 * main - it run our infiite loop for the shell
 * @ac: argument count
 * @av: argument vector
 * @env: enviorment
 * Return: always return 0.
 *
 */
int main(int ac __attribute__((unused)), char **av,  char **env)
{
	char *ptr = NULL, **tokens = NULL;
	size_t n = 0;
	int i;

	(void)av;
	while (1)
	{
		tokens = NULL;
		ptr = NULL;
		n = 0;
		if (isatty(0))
			write(1, "$ ", 2);
		if (getline(&ptr, &n, stdin) == EOF)
		{
			free(ptr);
			exit(EXIT_SUCCESS);
		}
		tokens = tokenization(ptr, " \n");
		free(ptr);
		if (tokens[0] != NULL)
		{
			if (_strcmp(tokens[0], "env") == 0)
			{
				for (i = 0; env[i]; i++)
				{
					write(1, env[i], _strlen(env[i]));
					write(1, "\n", 1);
				}
				free_array(tokens);
				continue;
			}
			if (die(tokens) == 1)
				execution(tokens, env);
		}
		else
			free(tokens);
	}
	free_array(tokens);
	free(ptr);
	return (0);
}

/**
 * die - function that will check if tokens 0 is the word exit
 * @tokens: array of tokens that we will checked only the first token
 * Return: 1, if the word is not exit, or 0 if it exit
 */
int die(char **tokens)
{
	if (_strcmp(tokens[0], "exit") == 0)
	{
		free_array(tokens);
		exit(0);
	}
	return (1);
}
