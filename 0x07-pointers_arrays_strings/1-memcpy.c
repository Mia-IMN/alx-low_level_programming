#include "main.h"

/**
 *_memcpy - copies from src to dest
 *@dest: char pointer
 *@src: char pointer
 *@n: unsigned int
 *Return: dest pointers
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
