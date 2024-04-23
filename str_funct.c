#include "simple_shell.h"
/**
 * _strcpy - Copies the string pointed to by src
 * including the terminating null byte(\0), to the buffer
 * pointer to by dest.
 *
 * @dest: destination
 * @src: source
 *
 * Return: Return the value of the pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int cp;

	cp = 0;

	while (src[cp] != '\0')
	{
		dest[cp] = src[cp];
		cp++;
	}
	dest[cp] = '\0';

	return (dest);
}

#include "simple_shell.h"
/**
 * _strcat - This function appendes the src to the dest string,
 * overwritingh the termination null byte at the end of dest,
 * and then adds a termination null byte.
 *
 * @dest: original
 * @src: to be added to dest
 *
 * Return: a pointer to the resulting string of dest.
 */
char *_strcat(char *dest, char *src)
{
	int mv, origin;

	origin = 0;
	mv = 0;

	while (dest[origin] != '\0')
		origin++;

	dest[origin] = '/';

	origin++;

	while (src[mv] != '\0')
	{
		dest[origin] = src[mv];
		origin++;
		mv++;
	}
	dest[origin] = '\0';
	return (dest);
}

#include "simple_shell.h"
/**
 * _strlen - Return the lenght of a string
 *
 * @s: charater pointer
 *
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (len);
}

#include "simple_shell.h"
/**
 * _strdup - Duplicates a given string
 * @s: given string
 * Return: Copy of given string
*/
char *_strdup(char *s)
{
	char *ptr;
	int i, leng  = 0;

	if (s == NULL)
		return (NULL);

	leng = _strlen(s);

	ptr = malloc(sizeof(char) * (leng + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < leng; i++)
		ptr[i] = s[i];

	ptr[i] = '\0';

	return (ptr);
}
