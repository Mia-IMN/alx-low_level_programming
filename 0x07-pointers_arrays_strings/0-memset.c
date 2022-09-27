#include "main.h"

/**
 *_memset - fills the first n bytes of memory area with the constant byte b
 *@s: char pointer
 *@b: character variable
 *@n: integer variable
 *Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
