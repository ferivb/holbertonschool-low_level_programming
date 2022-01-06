#include "lists.h"

/**
 * add_dnodeint - adds a node at the beggining of the list
 *
 * @head: head of the list
 * @n: data for the list
 * Return: pointer of newly created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *old;

	old = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
		if (old == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	old->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
