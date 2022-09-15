#include "main.h"

/**
 * more_numbers - print from 0 - 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int num, count;
	int a, b;

	for (cnt = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				a = num / 10;
				b = num % 10;
				_putchar(a + '0');
			}
			else
				b = num;
			_putchar(b + '0');
		}
		_putchar(10);
	}
}
