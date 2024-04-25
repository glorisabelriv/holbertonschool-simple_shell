#include "simple_shell.h"
/**
 * path - Function that gets the path from enviorment
 *
 * @env: Enviorment variables
 *
 * Return: a string that contains enviorments, or NULL if failes
 */
char *path(char **env)
{
	int i;

    for (i = 0; env[i] != NULL; i++)
    {
        if (strncmp(env[i], "PATH=", 5) == 0)
        {
            char *pathValue = strchr(env[i], '=') + 1;
            return strdup(pathValue);
        }
    }
    return (NULL);
}
