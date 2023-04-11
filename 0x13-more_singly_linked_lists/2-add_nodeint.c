#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @m: The data that  adds a new node.
 *
 * Return: New element, or if it failed, NULL.
 */
listint_t *add_nodeint(listint_t **head, const int m)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = m;
	new->next = *head;
	*head = new;

	return (new);
}
