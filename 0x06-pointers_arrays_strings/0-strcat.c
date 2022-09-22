#include "main.h"
#include <string.h>

/**
 *_strlen -  counts the length of a char
 *@s: char pointer
 *Return: length
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
/**
 *_strcat - concatenates two strings
 *@dest: char pointer
 *@src: char pointer
 *Return: 0
 */

char *_strcat(char *dest, char *src)
{
int len1, len2, i;

len1 = _strlen(dest);
len2 = _strlen(src);

for (i = 0; i <= len2; i++)
{
dest[len1 + 1] = src[i];
}
return (dest);
}
