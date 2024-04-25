#include "simple_shell.h"
/**
 * add_path - this functions concatenates the path with the cmd
 * @tokens: the cmd the person introduces
 * @tok_path: the path
 * Return: the path concatenated in position 0 of the array.
 */
char *add_path(char **tokens, char **tok_path) {
    char *cmd;
    int i = 0;
    struct stat stat_buf;

    while (tok_path[i]) {
        cmd = malloc(strlen(tok_path[i]) + strlen(tokens[0]) + 2);
        if (cmd == NULL) {
            perror("malloc failed");
            return NULL;
        }
        strcpy(cmd, tok_path[i]);
        _strcat(cmd, tokens[0]);
        printf("Checking path: %s\n", cmd);

        if (stat(cmd, &stat_buf) == 0) {
            printf("Executable found: %s\n", cmd);
            return cmd;
        }
        free(cmd);
        i++;
    }
    printf("Command not found.\n");
    return NULL;
}

