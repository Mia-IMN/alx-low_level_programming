#include "main.h"

/**
 *_puts - prints a string to stdout
 *@str: char pointer
 *Return: 0
 */

void _puts(char *str)
{
int c = 0;
while (*(str + c))
{
_putchar(*(str + c));
c++;
}
_putchar('\n');
}
