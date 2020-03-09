#ifndef DOG_H
#define DOG_H
/**
 *struct dog - struct containg doggo info
 *@name: name of dog
 *@age: age of dog
 *@owner: dog over
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
