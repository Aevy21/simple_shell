#include "main.h"

/**
 * _strncpy - Copies a string up to n characters.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Cp characters from the src string to the dest buffer until the end */
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	/* If there are remaining positions in the dest buffer, fill them with '\0'*/
	while (i < n)
	{
		dest[i++] = '\0';
	}

	/* Return a pointer to the destination buffer. */
	return (dest);
}

