 This project is all about singly linked list
 A list contain data and a link to next node
 a self referential structure is a structure that contains
 a pointer to a structure of the same type

 it is used to create a node of singly linked list

 struct node 
{
	int data;
	char str;
	struct node *link;
}
int main
struct node *head = Null;
head = malloc(sizeof(struct node));

we can use typedef to define stuct node as list_t
typedef struct node list_t
