#include "simple_shell.h"
/**
 * execution - function that compares our string and execute the command.
 * @tokens: Our array of tokens
 * @env: Our enviorment variables
 * Return: Always return one
 */
#include "simple_shell.h"

int execution(char **tokens, char **env)
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
        if (!cmd) {
            perror("Failed to tokenize PATH");
            return (0);
        }
        tokens[0] = add_path(tokens, cmd);
        free_array(cmd);
        if (!tokens[0] || stat(tokens[0], &buffer) != 0)
        {
            perror("cmd not found");
            return (0);
        }
    }
    chid_pid = fork();
    if (chid_pid == -1)
        perror("Child process failed");
    else if (chid_pid == 0) {
        execve(tokens[0], tokens, env);
        perror("./hsh");
		exit(EXIT_FAILURE);
    } else {
        wait(&statu);
    }
    free_array(tokens);
    return (1);
}
