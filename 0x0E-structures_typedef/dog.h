#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog structure
 * @name: neme of the dog
 * @age: age of the dog
 * @owner: of the dog
 *
 * Description: it's a dog struct
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif