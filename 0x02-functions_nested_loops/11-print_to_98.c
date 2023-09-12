#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * followed by a new line
 * @n: The number to start printing from
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				_putchar(i + '0');
			else
				_putchar(i + '0');
		}

		_putchar('\n');
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				_putchar(i + '0');
			else
				_putchar(i + '0');
		}

		_putchar('\n');
	}
}
