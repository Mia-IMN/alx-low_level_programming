#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers
 *@argc: int parameter
 *@argv: string parameter
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
int firstnum = atoi(argv[1]);
int secondnum = atoi(argv[2]);
int mul = firstnum * secondnum;

if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", mul);
return (0);
}
