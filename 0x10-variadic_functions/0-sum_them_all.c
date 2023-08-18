#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns paramters sum .
 * @k: The no. of paramter passed to  function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If k == 0 - 0.
 *         Otherwise -  sum of all parameters.
 */
int sum_them_all(const unsigned int k, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, k);

	for (i = 0; j < k; j++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
