#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (d).
 *
 * @head: Points to the head of the linked list
 *
 * Return: The head node’s data (d).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *temp2;
	int d;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	temp2 = temp->next;
	d = temp->n;
	free(*head);
	*head = temp2;

	return (d);
}
