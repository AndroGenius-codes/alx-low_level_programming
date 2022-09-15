#include "main.h"

/**
 * _isupper - checks if character is in uppercase
 * @c: character parameter
 *
 * Return: int
 */

int _isupper(int c)
{
	int UpperCase;

	for (UpperCase = 'A'; UpperCase  <= 'Z'; UpperCase++)
	{
		if (c == UpperCase)
			return (1);
	}
	return (0);
}
