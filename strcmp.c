#include "main.h"

/**
 * _strcmp - Compare two strings lexicographically.
 * @s1: The first null-terminated string to be compared.
 * @s2: The second null-terminated string to be compared.
 *
 * Return: A negative integer if s1 is less than s2,
 *         a positive integer if s1 is greater than s2,
 *         and 0 if both strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

