#include "main.h"

/**
 *_isdigit - Checks for digits
 *@c: inpute value
 *Return: returns 1 if digit and 0 is n
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
