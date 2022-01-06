#include "lists.h"

/**
 * free_dlistint - frees a list
 *
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *new;

	temp = head;
	while (head != NULL)
	{
		new = temp->next;
		free(temp);
		temp = new;
	}
}
