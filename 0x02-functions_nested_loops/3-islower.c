#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

/**
*_islower - checks for lowercases
*@c:int
*Return: 0
*/
int _islower(int c)
{
if (c > 96 && c < 123)
{
return (1);
}
else
return (0);
}
