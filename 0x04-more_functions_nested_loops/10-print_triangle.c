#include "main.h"

/**
 * print_triangle - Draws a triangle, using #
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(' ');

			for (j = 0; j < hash; j++)
				_putchar('#');

			if (i == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
