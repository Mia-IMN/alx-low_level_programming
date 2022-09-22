#include "main.h"
#include <string.h>

/**
 *_strncat - concatenates two strings
 *@dest: char pointer
 *@src: char pointer
 *@n: int pointer
 *Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
int l1 = strlen(dest);
int i;

for (i = 0; i < n; i++)
{
dest[l1 + i] = src[i];
}
return (dest);
}
