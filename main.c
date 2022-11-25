#include "main.h"

int (*inbuiltFunctions[])(char **) = {
	&inbuilt_cd,
	&inbuilt_help,
	&inbuilt_exit
};

/**
 * main - Main Entry
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(__attribute__((unused))int ac, __attribute__((unused))char **av)
{
	promptLoop();
	return (EXIT_SUCCESS);
}
