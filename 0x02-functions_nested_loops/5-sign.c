#include "main.h"

/**
 * print_sign - Checks sign of character
 * @n: Receives an argument that is an integer
 *
 * Return: int
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return(0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
