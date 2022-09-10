#include <stdio.h>

/**
 *main - prints all alphabets except e and q
 *
 *Return: 0
 */
int main(void)
{
char n;
n = 'a';
while (n <= 'z')
{
if ((n != 'e') && (n != 'q'))
{
putchar(n);
++n;
}
else
{
++n;
}
}
putchar('\n');
return (0);
}
