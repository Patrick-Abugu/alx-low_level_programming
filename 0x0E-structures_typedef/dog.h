/**
  * struct dog - my dog structure
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Description: some stuffs
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
