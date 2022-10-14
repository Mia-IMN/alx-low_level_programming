#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - prins strings followed by a new line
 *@separator: separates strings
 *@n: number of argument
 *
 *Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%s", va_arg(ap, char *));
if (NULL)
printf("(nil)");
if (i == (n - 1))
break;
if (separator != NULL)
printf("%s", separator);
else
continue;
}
printf("\n");
va_end(ap);
}
