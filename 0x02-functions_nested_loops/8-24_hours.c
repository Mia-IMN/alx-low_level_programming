#include <stdio.h>
#include "main.h"

/**
 *jack_bauer - prints every minute of the day of jack Bauer
 *
 *Return: 0
 */
void jack_bauer(void)
{
int h = 0;
for (; h <= 23; h++)
{
int m = 0;
while (m <= 59)
{
_putchar (h / 10 + '0');
_putchar (h %  10 + '0');
_putchar (':');
_putchar (m / 10 + '0');
_putchar (m % 10 + '0');
_putchar ('\n');
m++;
}
}
}
