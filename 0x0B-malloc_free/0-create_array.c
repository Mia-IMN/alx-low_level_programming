#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *create_array - creates an array of chars
 *@size: array size
 *@c: character parameter
 *
 *Return: 0
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *b;

if (size <= 0)
return (NULL);

b = malloc((size) * sizeof(char));
if (b == NULL)
{
return (NULL);
}
i = 0;
while (i < size)
{
b[i] = c;
i++;
}
b[i] = '\0';
return (b);
}
