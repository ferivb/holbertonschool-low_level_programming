#include "lists.h"

/**
  * add_nodeint - Adds a node in the beggining of the list.
  * @head: Head of the list.
  * @n: data to include in the node.
  * Return: pointer to the new node.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
