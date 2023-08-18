#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum__all - Returns the sum of all its parameters.
 * @k: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If k == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int k, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, k);

	for (j = 0; j < k; j++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

