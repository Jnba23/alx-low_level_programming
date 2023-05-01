#include "lists.h"

/**
 * free_listint - Frees the listint_t
 * @head: pointer to head of the listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
