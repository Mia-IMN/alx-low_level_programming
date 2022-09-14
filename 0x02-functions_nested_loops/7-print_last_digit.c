#include <stdio.h>
#include "main.h"

/**
 *print_last_digit - prints last digit of a number
 *@r: int
 *Return: @r value
 */
int print_last_digit(int r)
{
int l = r % 10;
if (l < 0)
{
l *= (-1);
}
_putchar(l + '0');
return (l);
}
