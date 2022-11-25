#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define ShBUFSIZE 1024
#define DELIM " \n\t\a\r"

extern int (*inbuiltFunctions[])(char **);

extern char *execLibrary[3];

int _strlen(char *str);

int printer(char *ch);

void promptLoop(void);

char *_readLine(void);

char **argsTokenizer(char *args);

int argsExecute(char **tokens);

int Execute(char **tokens);

int numofExecutables(void);

int inbuilt_help(char **args);

int inbuilt_cd(char **args);

int inbuilt_exit(char **args);


#endif
