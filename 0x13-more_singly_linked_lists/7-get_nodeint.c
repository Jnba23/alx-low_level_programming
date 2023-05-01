#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 *                        listint_t
 * @head: pointer to the head of listint_t
 * @index: The index of the node to locate
 * Return: Always 0 (Success)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
