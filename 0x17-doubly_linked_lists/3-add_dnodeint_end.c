#include "lists.h"

/**
 * add_dnodeint_end - adds node to end of list
 * @head: head of the list
 * @n: data to add to the new node
 * Return: Pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *traverser;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		{
		free(new);
		return (NULL);
		}
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		new->n = n;
		*head = new;
		return (new);
	}
	traverser = *head;
	while (traverser->next != NULL)
	{
		traverser = traverser->next;
	}
	traverser->next = new;
	new->prev = traverser;
	new->n = n;
	return (new);
}
