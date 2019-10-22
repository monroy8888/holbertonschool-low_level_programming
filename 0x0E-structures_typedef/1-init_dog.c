#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initialize a variable of type struct dog.
 *@d: struct
 *@name: char
 *@age: float
 *@owner: char
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
	{
		return;
	}
}
