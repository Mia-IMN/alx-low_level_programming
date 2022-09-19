#include "main.h"

/**
 *swap_int - swaps the values of two variables
 *@a: int pointer
 *@b: int pointer
 *Return: 0
 */
void swap_int(int *a, int *b)
{
int e = *a;
*a = *b;
*b = e;
}
