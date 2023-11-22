#include "lists.h"
/**
*	create_newnode - createsa a new node
*	@n: data of node
*	Return: pointer to node
*/
	listint_t *create_newnode(int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	return (newnode);
}
/**
*	insert_nodeint_at_index - inserts a new node at a given position.
*	@head: pointer to first element
*	@idx: index of new node position
*	@n: new node data
*	Return: address of new node
*/
	listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *tmp_old;
	listint_t *newnode;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	newnode = create_newnode(n);
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head == newnode;
		return (newnode);
	}
	if (idx == 0)
		*head = newnode;
	for (i = 0; i < idx - 1 && tmp != NULL && idx != 0; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
		newnode->next = tmp;
	else
	{
		tmp_old = tmp->next;
		tmp->next = newnode;
		newnode->next = tmp_old
	}
	return (newnode);
}
