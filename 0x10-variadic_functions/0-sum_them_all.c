#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @k: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If k == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int k, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, k);

	for (i = 0; i < k; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}





