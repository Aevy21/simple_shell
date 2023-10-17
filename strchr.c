#include "main.h"

/**
 * _strchr - Locate a character in a string.
 * @str: The string to search in.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *str, char c)
{
	int i;

	/* Iterate through the string to find the character c. */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == c)
		{
			return (str + i); /* Return a pointer to the found character.*/
		}
	}

	/* If character c is not found, return NULL. */
	return (NULL);
}

