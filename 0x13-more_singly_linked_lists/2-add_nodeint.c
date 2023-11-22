#include "lists.h"
/**
*	add_nodeint -  adds a new node at the beginning of a listint_t list.
*	@head: pointer to the head pointer
*	@n:new integer
*	Return: head
*/
	listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (0);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
		newnode->next = NULL;
	else
		newnode->next = *head;
	newnode->n = n;
	*head = newnode;

	return (0);
}
