#include "main.h"

/**
 * inbuilt_cd - function that implements changing of directories
 * @args: directory to be swapped to
 *
 * Return: 0 if success, non-zero otherwise or error
 */
int inbuilt_cd(char **args)
{
	if (args[0] == NULL)
	{
		perror("Error");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("Error");
		}
	}
	return (1);
}
