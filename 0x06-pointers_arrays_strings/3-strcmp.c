#include "main.h"

/**
 *_strcmp - compares two string
 *@s1: char pointer
 *@s2: char pointer
 *Return: 0
 */

int _strcmp(char *s1, char *s2)
{
int result, i;

for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] == s2[i])
result = (s1[i] - '0') - (s2[i] - '0');

else
{
result = (s1[i] - '0') - (s2[i] - '0');
break;
}
}

return (result);
}
