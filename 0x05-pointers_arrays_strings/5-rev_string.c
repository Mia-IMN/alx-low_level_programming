#include "main.h"
#include <string.h>

/**
 *rev_string - reverses a string
 *@s: char pointer
 *Return: @s
 */

void rev_string(char *s)
{
  long int i = sizeof(s);
  char *p = s;
while (i >= 0)
    {
      *p + (sizeof(s) - i) = s[i];
     _putchar(s[i]);
      i--;

    }
 _putchar('\n');
 }
