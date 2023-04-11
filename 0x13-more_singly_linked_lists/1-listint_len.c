#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *head)
{
	size_t num = 0;

	while (head)
	{
		num++;
		head = head->next;
	}

	return (num);
}
