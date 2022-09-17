#include "main.h"

/**
 *more_numbers - prints 10 times the number
 *
 *Return: 0
 */
void more_numbers(void)
{
int j;
int m = 0;
while (m < 10)
{
for (j = 0; j < 15; ++j)
{
if (j >= 10)
_putchar((j / 10) + 48);
_putchar((j % 10) + 48);
}
_putchar('\n');
m++;
}
return;
}
