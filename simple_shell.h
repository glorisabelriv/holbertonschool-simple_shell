#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H
#define BUFFER_SIZE 1024
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>

char **tokenization(char *str, char *delim);
int execution(char **tokens, char **env);
char *path(char **env);
char *add_path(char **tokens, char **tok_path);
int die(char **tokens);

int _strlen(char *s);
char *_strcpy(char *dest,char *src);
int _strcmp(char *compring, char *comp);
void free_array(char **tokens);
int _strncmp(char *compring, char *comp, size_t n);
char *_strdup(char *s);
char *_strcat(char *dest,const char *src);
#endif
