#include "lists.h"

/**
  * print_listint -  a function that prints all the elements of a listint_t list.
  * @h: singly linked list
  * Return: nummber of node in the list
  */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
