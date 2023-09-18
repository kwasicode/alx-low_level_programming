#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 * Return: Always 0
 */

int main(void)
{
	int n;
	
	n = 411;
	printf("print the value of n = %d\n", n);
	reset_to_98(&n);
	printf("Reset the value to 98 = %d\n", n);
	return (0);
}
