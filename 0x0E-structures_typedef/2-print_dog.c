#include "dog.h"
#include <stdio.h>

/**
 *print_dog - prints new dog structure
 *@d: dog structure
 *
 *Return: 0
 */

void print_dog(struct dog *d)
{
if (d == NULL)
printf("\n");
if (d->name == NULL)
printf("Name: nil\n");
else
printf("Name: %s\n", d->name);
if (d->age == 0)
printf("Age: nil\n");
else
printf("Age: %1f\n", d->age);
if (d->owner == NULL)
printf("Owner: nil\n");
else
printf("Owner: %s\n", d->owner);
}
