#include "main.h"

/**
 * inbuilt_help - function that implements the help command and displays info
 * @args: info about to be displayed
 *
 * Return: Success
 */
int inbuilt_help(__attribute__((unused))char **args)
{
	char *execLibrary[] = {
		"cd",
		"help",
		"exit"
	};
	int count;

	printf("Shell Project by George & Oluwatobi 2022\n");
	printf("Type 'help' to see this list\n");
	printf("Type 'help name' to find out more about the function name\n");
	printf("Use 'info' or 'man' to find out about commands not on help\n");
	printf("Some builtin commands :-\n");

	while (count < numofExecutables())
	{
		printf("%s\n", execLibrary[count]);
		count++;
	}
	return (0);
}
