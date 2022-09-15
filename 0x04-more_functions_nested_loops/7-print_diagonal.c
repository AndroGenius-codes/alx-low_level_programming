#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of diagonal lines
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int num, num_space;

	if (n <= 0)
		_putchar(10);

	for (num = 1; num <= n; num++)
	{
		for (num_space = 0; num_space < num - 1; num_space++)
			_putchar(' ');
		_putchar('\\');
		_putchar(10);
	}
}
