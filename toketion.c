#include "simple_shell.h"

/**
 * tokenization - extract tokens from the getline command
 * @ptr: String of the command line
 * @delim: Delimiter
 * Return: the array of tokens
 */
char **tokenization(char *ptr, char *delim)
{
    char *token = NULL, **tokens = NULL;
    int i = 0, capacity = 10;

    tokens = malloc(sizeof(char *) * capacity);
    if (!tokens) {
        perror("malloc failed");
        return (NULL);
    }

    token = strtok(ptr, delim);
    while (token)
    {
        if (i >= capacity - 1) {
            capacity *= 2;
            tokens = realloc(tokens, sizeof(char *) * capacity);
            if (!tokens) {
                perror("realloc failed");
                return (NULL);
            }
        }
        tokens[i] = strdup(token);
        if (!tokens[i]) {
            perror("strdup failed");
            free_array(tokens);
            return (NULL);
        }
        i++;
        token = strtok(NULL, delim);
    }
    tokens[i] = NULL;
    return (tokens);
}

