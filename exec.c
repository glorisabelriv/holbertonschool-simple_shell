#include "shell.h"
/**
 * execution - function that compares our string and execute the command.
 * @tokens: Our array of tokens
 * @env: Our enviorment variables
 * Return: Always return one
 * Description: First our function will compare our token position 0
 * with the built-in (exit & env). If its not a built in he will check
 * for the command and print out the result of the execution.
 */
int execution(char **tokens,  char **env)
{
	int statu;
	pid_t chid_pid;
	char *tok_path, **cmd;
	struct stat buffer;

	if (stat(tokens[0], &buffer) != 0)
	{
		tok_path = path(env);
		cmd = tokenization(tok_path, ":");
		free(tok_path);
		tokens[0] = add_path(tokens, cmd);
		if (stat(tokens[0], &buffer) != 0)
		{
			free_array(cmd);
			free_array(tokens);
			perror("cmd not found");
			return (0);
		}
	}
	chid_pid = fork();
	if (chid_pid == -1)
		perror("Child process failed");
	else if (chid_pid == 0)
	{
		if (execve(tokens[0], tokens, env) == -1)
			perror("./hsh");
	}
	else
		wait(&statu);
	free_array(tokens);
	return (1);
}
