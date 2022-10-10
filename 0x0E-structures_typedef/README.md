#
All about creating struct

struct Dog
{
	char *name;
	int age;
	char *owner
}
int main(void)
{
	struct Dog mydog
	mydog.age = 2;
	mydog.owner = "patrick";
	mydog.name = "bingo"
}

using pointers
int main(void)
{
	struct Dog mydog
	struct Dog = *ptr;
	ptr = &mydog; /* dereferncing so that my dog can be assessed with . notation;
	(*ptr).name = "bingo"

	can equally be assesed with -> withour dereferncing;

	ptr->owner = "patrick";
}
