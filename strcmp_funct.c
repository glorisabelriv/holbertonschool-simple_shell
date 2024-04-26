#include "simple_shell.h"
/**
 * _strcmp - compare two strings
 * @compring: source string
 * @comp: string to be compare againt source.
 * Return: 0 if its equal, otherwise is not equal.
 */
int _strcmp(char *compring, char *comp)
{
	while (*compring == *comp)
	{
		if (*compring == '\0')
			return (0);
		compring++;
		comp++;
	}
	return (*compring - *comp);
}

#include "simple_shell.h"
/**
 * _strncmp - Compares two strings with n size
 * @comp: Given String 1
 * @compring: Given String 2
 * @n: Size to character compare
 * Return: 0 both strings are equals
*/
int _strncmp(char *comp,  char *compring, size_t n)
{
	while (n && *comp && (*comp == *compring))
	{
		++comp;
		++compring;
		--n;
	}

	if (n == 0)
		return (0);
	else
		return (*(unsigned char *)comp - *(unsigned char *)compring);
}
