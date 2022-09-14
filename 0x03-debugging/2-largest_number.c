#include "main.h"

/**
 * largest_number - returns the largest of 3
 * integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: largest number
 */

long largest_number(int a, int b, int c)
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
