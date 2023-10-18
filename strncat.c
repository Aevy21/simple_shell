#include "main.h"

/**
 * _strncat - Concatenates two strings up to 'n' characters.
 * @dest: The destination string to which the source will be concatenated.
 * @src: The source string to be concatenated.
 * @n: The maximum number of characters to concatenate.
 * Return: A pointer to the destination string.
 */

char *_strncat(char *dest, const char *src, size_t n)
{
	char *destEnd = dest;

	/* Find the end of the destination string*/
	while (*destEnd != '\0')
	{
		destEnd++;
	}

	/*Concatenate up to 'n' characters from the source string*/
	while (*src != '\0' && n > 0)
	{
		*destEnd = *src;
		destEnd++;
		src++;
		n--;
	}

	/* Add a null terminator to the end of the concatenated string*/
	*destEnd = '\0';

	return (dest);
}

