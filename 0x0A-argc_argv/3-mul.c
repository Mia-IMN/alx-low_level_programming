#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers
 *@argc: int parameter
 *@argv: string parameter
 *Return: 0
 */

int main(int argc, char *argv[])
{
  /**
   *int firstnum = argv[1];
   *int secondnum = argv[2];
   */

if (argc == 1)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
