#include "function_pointers.h"
#include <stddef.h>

/**
 *print_name - prints a name
 *@name: char pointer
 *@f: function pointer
 *
 *Return: always 0
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
