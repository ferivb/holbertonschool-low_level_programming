#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *old = NULL;
	unsigned int i = 0;

	old = *h;
	while (i < idx)
	{
		old = old->next;
		i++;
	}
	if (old == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = old;
	new->prev = old->prev;
	old->prev = new;
	old = new->prev;
	old->next = new;

	return (new);
}