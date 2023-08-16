#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_dog - start
  * @d: dog
  * Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	if (d->age == NULL)
	{
		d->age = "(nil)";
	}
	printf("Name: %s\nAge: %lf\nOwner: %s\n", d->name, d->age, d->owner);
}
