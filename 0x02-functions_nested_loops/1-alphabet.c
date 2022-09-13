#include <stdio.h>

/**
 *main - prints alphabets in lowercase
 *
 *Return: 0
 */
int print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
