#include "main.h"
#include <string.h>

/**
 * check_space - it will check if the command is spaces only without any letters
 * @array: the string to check
 * Return: 1 if the string has no letters and only spaces, 0 otherwise
 */
int check_space(char *args)
{
    /* Compare the string with a string containing only spaces*/
    if (strcmp(args, " ") == 0)
    {
        return (0); /* The string contains only spaces*/
}
}
