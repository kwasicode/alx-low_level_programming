#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This Returns sum of all paramters.
 * @n: Parameter number passed to the function.
 * @...: A variable to calculate the sum.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
