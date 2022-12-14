#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *alpha = "Main";

	while (*alpha)
	{
		_putchar(*alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}
