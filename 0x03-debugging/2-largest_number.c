#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: largest number
 */

long largest_number(long a, long b, long c)
{
	int largest_N;

	if (a > b)
		largest_N = a;
	else (b > a)
		largest_N = b;

	if (largest_N < c)
		largest_N = c;

	return (largest_N);
}
