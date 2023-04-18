#include<stdio.h>
#include"dog.h"
/**
 *  print_dog - print the dog's info
 *  @d: pointer to the dog's
 *  Return: void
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}