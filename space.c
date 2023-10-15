#include "main.h"

/**
 * check_space - Check if the string contains only spaces
 * @args: The string to check
 * Return: 1 if the string contains only spaces, 0 otherwise
 */
void check_space(char *args)
{
    int i = 0;
    while (args[i] != '\0')
    {
        if (args[i] != ' ')
        {
            return; /* The string contains a non-space character; do nothing*/
        }
        i++;
    }
}

