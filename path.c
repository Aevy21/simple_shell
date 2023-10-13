#include "main.h"

/**
 * construct_full_path - Construct the full path to the executable.
 * @directory: The directory containing the executable.
 * @command: The name of the command.
 * @full_path: The buffer to store the full path.
 * @full_path_size: The size of the full_path buffer.
 */

void construct_full_path(const char *directory, const char *command, char *full_path, size_t full_path_size)
{
    if (full_path_size > 0)
    {
        full_path[0] = '\0';  /* Initialize the full_path string as empty */
    }

    strncat(full_path, directory, full_path_size);

    if (full_path[strlen(full_path) - 1] != '/') {
        /* Ensure there's a '/' between directory and command*/
	    strncat(full_path, "/", full_path_size);
    }

    strncat(full_path, command, full_path_size);
}

