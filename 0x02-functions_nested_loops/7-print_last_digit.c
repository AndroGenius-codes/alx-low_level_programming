#include "main.h"
#include <limits.h>

/**
 * print_last_digit - returns the last digt of a number
 * @n: input an integer
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n *= -1;
	if (n == INT_MIN)
		n = 88;
	l = (n % 10);
	_putchar(l + '0');
	return (l);
}
