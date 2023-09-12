#include "main.h"

/**
 * _islower - Check if a character is lowercase
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
