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
#define EXIT_CODE 0

extern char **environ;

void display_prompt(void);
void parse_command(char *command, char **args);
void execute_command(char *args[], char *input);
void construct_full_path(const char *directory, const char *command,
		char *full_path, size_t full_path_size);
void handle_exit_command(char *args[], char *input);
int is_exit_command(char *command);
void printEnvironmentVariables(void);
int isLsColorsVariable(char *variable);

/*helper functions prototypes*/
int _strlen(char *s);
char *_strchr(char *str, char c);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strtok(char *str, const char *delimiters);
char *customStrncat(char *dest, const char *src, size_t n);
int _strncmp(char *s1,  char *s2, size_t n);
char *_strncat(char *dest, const char *src, size_t n);
int _atoi(char *str);
#endif
