#ifndef DOG_H
#define DOG_H

/**
  * struct dog - dog structure
  * @name: Dog name
  * @age: Dog age
  * @owner: Dog owner
  * Description: Dog attributes
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
