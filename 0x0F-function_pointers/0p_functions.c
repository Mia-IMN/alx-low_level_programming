#include <stdlib.h>

/**
 *op_add - returns sum of numbers
 *@a: first argument
 *@b: second argument
 *Return: 0
 */

int op_add(int a, int b)
{
  //if (!a || !b)
  //    {
  //  printf("Error\n");
  //  exit(98);
  //}
return (a + b);
}

/**
 *op_sub - returns difference of numbers
 *@a: first argument
 *@b: second argument
 *Return: 0
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul - returns product of numbers
 *@a: first argument
 *@b: second argument
 *Return: 0
 */
int op_mul(int a, int b)
{
return(a * b);
}

/**
 *op_div - returns result of division of numbers
 *@a: first argument
 *@b: second argument
 *Return: 0
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 *op_mod - returns remainder of division of numbers
 *@a: first argument
 *@b: second argument
 *Return: 0
 */

int op_mod(int a, int b)
{
return(a % b);
}
