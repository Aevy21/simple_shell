#include "main.h"

/**
 * _strncmp - Compares two strings up to a specified number of characters
 * @s1: The first string to be compared.
 * @s2: The second string to be compared
 * @n: The maximum number of characters to compare
 *
 * Return:
 *   - 0 if both strings are equal up to 'n' characters
 *   - A negative value if s1 is less than s2 up to 'n' characters.
 *   - A positive value if s1 is greater than s2 up to 'n' characters.
 */
int _strncmp(char *s1, char *s2, size_t n)
{
	while (n > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
		/* Both strings are equal up to 'n' characters*/
	}
	else
	{
		return (*s1 - *s2);
		/* One of the strings ended before 'n' characters*/
	}
}

