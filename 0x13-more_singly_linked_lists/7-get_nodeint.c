#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the first node in the linked list
 * @index: the node return
 *
 * Return: the node found, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int r = 0;

	while (head)
	{
		if (r++ == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
