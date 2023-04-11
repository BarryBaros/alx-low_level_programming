#include "lists.h"

/**
 * free_listint - It frees a listint_t list.
 * @f: A pointer to the head of the listint_t to be freed.
 */
void free_listint(listint_t *f)
{
	listint_t *tmp;

	while (f)
	{
		tmp = f->next;
		free(f);
		f = tmp;
	}
}
