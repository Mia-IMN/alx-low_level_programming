#include "main.h"
#include <stdlib.h>

/**
 *puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *@str: pointer Dereferencing at string.
 *Return : @str
 */

void puts2(char *str)
{
int i = 0;
while (*str)
{
_putchar(*str);
str++;
if (str == '\0')
{
i++;
_putchar('\n');
break;
}
else
str++;
}
if (i != 1)
_putchar('\n');
}
