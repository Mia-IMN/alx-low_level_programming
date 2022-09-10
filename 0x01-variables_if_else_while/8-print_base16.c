#include <stdio.h>

/**
 *main - prints all the numbers of base 16 in lowercase
 *
 *Return: 0
 */
int main(void)
{
int a;
int n;
for (n = '0'; n <= '9'; ++n)
putchar(n);
for (a = 'a'; a <= 'f'; ++a)
putchar(a);
putchar('\n');
return (0);
}
