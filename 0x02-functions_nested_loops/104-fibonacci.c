#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that find and print
 * first 98 fibonacci starting fro 1 and 2
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int f0 = 0, f1 = 1, x;
	int i;

	for (i = 1; i <= 98; i++)
	{
		x = f0 + f1;

		if (i != 98)
		{
			printf("%lu, ", x);
		}
		else
		{
			printf("%lu\n", x);
		}
		f0 = f1;
		f1 = x;
	}
	return (0);
}
