#include <stdio.h>

/**
 *print_sign - prints sign of a number
 *@n: int
 *Return: @n value
 */
int print_sign(int n)
{
if (n > 0)
return (1);
else if (n < 0)
return ('-');
else
return (0);
}
