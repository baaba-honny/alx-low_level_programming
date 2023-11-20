#include "lists.h"
/**
*	add_node_end - adds a new node at the end of a list_t list.
*	@head: head of node
*	@str: string
*	Return: address of new element
*/
	list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tmp;
	unsigned int a, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		count++;
	newnode->len = count;
	newnode->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = newnode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}
	return (*head);
}
