#include "dog.h"


void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
		if (d->name == 0)
			printf("Name: (nil)\n");
	else
		printf("Name: %s\nAge: %f\n", d->name, d->age);
		if (d-> owner == 0)
			printf("Owner: (nil)\n");
	else 
		printf("Owner: %s\n", d->owner);
}
