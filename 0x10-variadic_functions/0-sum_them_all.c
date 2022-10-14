#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *sum_them_all - returns the sum of all its parameters
 *@n: given parameter
 *Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
va_list sm;
unsigned int i, sum;

if (n == 0)
return (0);
va_start (sm, n);
sum = 0;
for (i = 0; i < n; i++)
sum += va_arg (sm, int);

va_end (sm);
return sum;
}
