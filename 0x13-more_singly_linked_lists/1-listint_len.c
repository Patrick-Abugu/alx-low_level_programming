#include "lists.h"
/**
  * listint_len - a function that returns the...
  * ...number of elements in  a linked list
  * @h: singly linked list
  * @Return: number of elememnts in the list
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	
	while (h)
	{
		h = h->next;
		len++;
	}
	return(len);
}

