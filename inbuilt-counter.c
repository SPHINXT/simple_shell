#include "main.h"

/**
 * numofExecutables - function that counts the number of inbuilts executables
 *
 * Return: count of executables
 */
int numofExecutables(void)
{
	char *execLibrary[] = {
		"cd",
		"help",
		"exit"
	};
	int count;

	count = sizeof(execLibrary) / sizeof(char *);
	return (count);
}
