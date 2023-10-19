#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append.
 *
 * Return: A pointer to the resulting string (same as dest).
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	/* Initialize a variable to hold the length of the destination string. */
	int i;

	/* Calculate the length of the destination string. */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	/* Copy characters from the source string to the destination string. */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Add a null terminator to the end of the concatenated string. */
	dest[dest_len + i] = '\0';

	/* Return a pointer to the resulting string (same as dest). */
	return (dest);
}

