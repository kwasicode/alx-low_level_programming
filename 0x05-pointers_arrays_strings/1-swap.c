#include "main.h"

/**
 *swap_int - swaps the values of pointers
 *@a : first pointer
 *@b : second pointer
 */

void swap_int(int *a, int *b)
{
	int xx;

	xx = *a;
	*a = *b;
	*b = xx;
}
