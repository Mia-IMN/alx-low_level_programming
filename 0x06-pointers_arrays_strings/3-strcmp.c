#include "main.h"

/**
 *_strcmp - compares two string
 *@s1: char pointer
 *@s2: char pointer
 *Return: 0
 */

int _strcmp(char *s1, char *s2)
{
if (s1 == s2)
return (0);
else if (s1 > s2)
return (15);
else
return (-15);
}
