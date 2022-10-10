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

/**
  * dog_t - this will be used as a synonymn for struct dog
  *
  */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
