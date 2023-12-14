#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

extern char **environ;

void err(char *dir, char *non, char *message);
void error(char *name, int line, char *command, char *message, int inter);
void remove_newline(char *str);
char **tokenize(char *str, char *name);
void free_arr(char **arr);
char *accept_command(char *name, int line);
int execute(char **args, char *buffer, char *full_path, char *name, int line);
void prompt(int interactive);
char *Handle_path(char **args, char *buffer, char *name, int line);
void check_exit(char **command, char *buffer, int *stat);
int check_env(char *command);
char **parse_path(char *name);
char **tokenize_path(char *path, char *name);
int check_executable(char *path);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
char *_strtok(char *str, const char *delimiters);

#endif
