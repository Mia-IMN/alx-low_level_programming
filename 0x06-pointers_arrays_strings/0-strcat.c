#include "main.h"
#include <string.h>

/**
 *_strcat - concatenates two strings
 * _strlen -  counts the length of a char
 *@s: char pointer
 *Return: 0
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}
return (len);
}

char *_strcat(char *dest, char *src)
{
int len1, len2, i;

len1 = _strlen(dest);
len2 = _strlen(src);

for (i = 0; i <= len2; i++)
dest[len1 + 1] = src[i];

return (dest);
}
