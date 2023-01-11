#include <stdio.h>

/**
 * main - print number of arguments passed to params
 * @argc: number of arguments to pass
 * @argv: argument to pass
 * Return: o if successful
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	argv[0] = "";
	return (0);
}
