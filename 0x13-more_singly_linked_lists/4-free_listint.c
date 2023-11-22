#include "lists.h"
/**
*	free_listint - frees a listint_t list.
*	@head: pointer to first node
*	Return: void
*/
	void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
