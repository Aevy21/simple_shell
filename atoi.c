#include"main.h"

/**
 * _atoi - Converts a string to an integer.
 * @str: The string to be converted.
 *
 * Return: The integer value obtained from the string.
 */
int _atoi(char *str)
{
	int result = 0;
	int sign = 1;

	/*Check for leading '+' or '-' and adjust the sign accordingly.*/
	if (*str == '-')
	{
		sign = -1;
		str++; /*Move to the next character.*/
	}
	else if (*str == '+')
	{
		str++;
	}

	/*Iterate through the string and convert to an integer.*/
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}

	/*Apply the sign to the result.*/
	result *= sign;

	return (result);
}

