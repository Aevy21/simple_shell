#include "main.h"
/**
 * check_space - Check if the string contains only spaces
 * @args: The string to check
 * Return: 1 if the string contains only spaces, 0 otherwise
 */
int check_space(char *args)
{
	int i = 0;
    /* Loop through the string to check for non-space characters */
    for (; args[i] != '\0'; i++)
    {
        if (args[i] == ' ')
	{
            return (0); /* The string is a space character */
        }
    }
}

