#ifndef DOG_H
#define DOG_H
/**
 *struct dog - struct containg doggo info
 *@name: name of dog
 *@age: age of dog
 *@owner: dog over
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
