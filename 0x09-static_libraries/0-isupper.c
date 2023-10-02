#include "main.h"
/**
 * _isupper - This function checks for upper and lower case character
 * @c: The character to be checked
 * Return: If upper return 1 if loweer return 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
