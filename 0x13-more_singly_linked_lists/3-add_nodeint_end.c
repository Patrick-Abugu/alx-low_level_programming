#include "lists.h"

/**
* *add_nodeint_end - a function that adds a new node  ...
* ...at the end of a listint_t list.
* @head: first node in list
* @n: linked list data
* Return: pointer to the address of the new element or null
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp; /*declare a temp last node*/

	temp = malloc(sizeof(listint_t)); /*create the node*/
	temp->next = NULL; /*make it the last node*/
	temp->n = n;

	if (temp == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = temp; /*make temp first node if the list is empty*/
	}
	else
	{
		listint_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next; /*iterate through the list to get the last node*/
		}
	lastNode->next = temp; /*set new last node to the temp node created*/
	}
	return (temp);
}
