#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digits of n
 * and weather it greater than 5, less than 6 or 0
 * Return: Always 0
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",n)
	}
	return (0);
}
