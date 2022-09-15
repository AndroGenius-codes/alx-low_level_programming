#include "main.h"

/**
 * print_line - prints a line
 * @n: number of lines
 *
 * Return: void
 */

void print_line(int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		_putchar('_');
	}
	_putchar(10);
}
