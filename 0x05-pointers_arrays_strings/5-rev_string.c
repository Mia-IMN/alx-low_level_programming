#include "main.h"
#include <string.h>

/**
 *rev_string - reverses a string
 *@s: char pointer
 *Return: @s
 */

void rev_string(char *s)
{
int i = 0;
for (i = strlen(s) - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
