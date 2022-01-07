#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 *
 * @h: head of the list
 * @idx: index to ad the list
 * @n: data to add
 * Return: pointer to the newly added node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *old = NULL;
	unsigned int i = 0;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		old = *h;
		i = 1;
		while (old != NULL)
		{
			if (i == idx)
			{
				if (old->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = old->next;
						new->prev = old;
						old->prev = new;
						old = new->prev;
						old->next = new;
					}
				}
			}
			old = old->next;
			i++;
		}
	}
	return (new);
}
