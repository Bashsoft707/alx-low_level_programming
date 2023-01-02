#include "main.h"

/**
 * print_chessboard - print a given 2d array chessboard of chars
 * @a: 2d array containing board
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
