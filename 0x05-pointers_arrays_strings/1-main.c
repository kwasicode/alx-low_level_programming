#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 * Return: Always 0
 */

int main(void)
{
	int bb = 3;

	int cc = 2;

	printf("The values of bb and cc are: %d, %d\n", bb, cc);
	swap_int(&bb, &cc);
	printf("The values of bb and cc are: %d, %d\n", bb, cc);

	return (0);
}

