#include <stdio.h>

/**
 *print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 *Return: 0
 */
int print_alphabet_x10(void)
{
int a = 0;
int j;
while (a < 10)
{
for (j = 'a'; j <= 'z'; j++)
{
putchar(j);
}
a++;
putchar('\n');
}
return (0);
}
