#include "lists.h"

/**
 * free_dlistint - frees a list
 *
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
