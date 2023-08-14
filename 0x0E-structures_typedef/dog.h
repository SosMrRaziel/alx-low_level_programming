#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct that defines a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This struct defines a dog and its attributes.
*/

typedef struct dog
	{
	char *name;
	float age;
	char *owner;
	}dog_t;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*DOG_H*/
