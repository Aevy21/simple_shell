#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <fcntl.h>
#include <stddef.h>

#define MAX_ARGS 64
#define MAX_INPUT_LENGTH 1024
#define EXIT_CODE 42

extern char **environ;

void check_space(char *args);
void display_prompt(void);
void parse_command(char* command, char** args);
void execute_command(char* const args[]);
void construct_full_path(const char *directory, const char *command, char *full_path, size_t full_path_size);
void handle_exit_command(char *args[], int arg_count);
int is_exit_command(const char *command);
void printEnvironmentVariables(void);
int isLsColorsVariable(const char *variable);

#endif
