#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Computes the sum of its provided parameters.
 * @k: The count of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If k is 0, the function returns 0.
 *         Otherwise, it returns the sum of all provided parameters.
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

