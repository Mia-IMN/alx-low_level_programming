#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: char pointer
 *@src: char pointer
 *@n: int pointer
 *Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
