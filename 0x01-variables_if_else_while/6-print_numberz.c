#include <stdio.h>

/**
 *main - prints all single digit numbers
 *
 *Return: 0
 */
int main(void)
{
int m;
for (m = '0'; m <= '9'; ++m)
putchar(m);
putchar('\n');
return (0);
}
