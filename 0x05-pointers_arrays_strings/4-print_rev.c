#include "main.h"
#include <string.h>

/**
 *print_rev - reverses a string
 *@s: char pointer
 *Return: @s
 */

void print_rev(char *s)
{
int i = 0;
for (i = strlen(s) - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
