#include "main.h"
#include <stdio.h>

/**
 *main - prints all arguments it receives
 *@argc: int parameter
 *@argv: char parameter
 *Return: 0
 */

int main(int argc, char *argv[])
{
int count = 0;
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
return (0);
}
