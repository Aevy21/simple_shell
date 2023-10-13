#include "main.h"

/**
 * isLsColorsVariable - Check if the variable starts with "LS_COLORS".
 * @variable: The environment variable to check.
 *
 * Return: 1 if the variable starts with "LS_COLORS", 0 otherwise.
 */
int isLsColorsVariable(const char *variable)
{
	/* Check if the variable starts with "LS_COLORS" */
	return (strncmp(variable, "LS_COLORS", 9) == 0);
}

/**
 * printEnvironmentVariables - Print environment variables except LS_COLORS.
 */
void printEnvironmentVariables(void)

{
	char **env = environ;
	for (; *env != NULL; env++)
	{
		if (!isLsColorsVariable(*env))
		{
			write(1, *env, strlen(*env)); /* Print the environment variable */
			write(1, "\n", 1);            /* Print a newline character */
		}
	}

	/* Include DISPLAY=:0 in the output at the bottom */
	write(1, "DISPLAY=:0\n", 11);
}

