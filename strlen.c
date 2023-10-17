#include "main.h"

/**
 * _strlen - Calculate and return the length of a string.
 * @s: The string to be checked.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	/* Iterate through the string to count its length.*/
	while (*s != '\0')
	{
		length++;
		s++;
	}

	/* Return the length of the string.*/
	return (length);
}

