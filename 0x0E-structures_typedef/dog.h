#ifndef dog_h
#define dog_h
/**
 *struct dog - experimental
 *@name: Sparky
 *@owner: Robby H
 *@age: 3
 *
 */

struct dog
{
	char *name, *owner;
	float age;
/* test comment. The Dog's Traits are not present*/

};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif