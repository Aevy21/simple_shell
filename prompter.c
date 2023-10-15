#include "main.h"

/**
 * display_prompt - Display the shell prompt.
 */
void display_prompt(void)
{
	if (isatty(STDOUT_FILENO))
	{
		if (write(STDOUT_FILENO, "MyShell> ", 9) == -1)
		{
			perror("Write error");
			exit(EXIT_FAILURE);
		}
	}
}
