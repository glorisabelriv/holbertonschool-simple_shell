#include "shell.h"
/**
 * path - Function that gets the path from enviorment
 *
 * @env: Enviorment variables
 *
 * Return: a string that contains enviorments, or NULL if failes
 */
char *path(char **env)
{
	int i = 0;
	char *path,  **cp_path;

	while (env[i])
	{
		if (_strncmp(env[i], "PATH", 4) == 0)
		{
			path = _strdup(env[i]);
			cp_path = tokenization(path, "=");
			free(path);
			path = _strdup(cp_path[1]);
		}
		i++;
	}
	free_array(cp_path);
	return (path);
}
