#include "lists.h"

/**
 * del_node_beg - deletes node at the beginning
 *
 * @h: head of the list
 * Return: 1 for success -1 for failure
 */
int del_node_beg(dlistint_t **h)
{
	dlistint_t *trash;

	trash = *h;
	while (trash != NULL)
	{
		trash = trash->next;
	}
	trash = *h;
	if (trash == NULL)
		return (-1);

	if (trash->next == NULL)
	{
		trash = *h;
		free(*h);
		trash = NULL;
		*h = NULL;
		return (1);
	}
	else
	{
		trash->next->prev = NULL;
		*h = trash->next;
		free(trash);
	}
	return (1);
}

/**
 * del_node_end - Deletes node at the end of a list
 *
 * @h: head of the list
 * Return: 1 for success 0 for failure
 */
int del_node_end(dlistint_t *h)
{
	dlistint_t *trash = NULL;
	dlistint_t *tail = NULL;

	trash = h;
	while (trash->next != NULL)
	{
		trash = trash->next;
	}
	tail = trash->prev;
	tail->next = NULL;
	free(trash);
	return (1);
}

/**
 * delete_dnodeint_at_index - deletes node at a given index
 *
 * @head: head of the list
 * @index: position of the node to delete
 * Return: 1 for success -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *trash = NULL;
	unsigned int i = 0;

	if (head != NULL)
	{
		if (index == 0)
			return (del_node_beg(head));

		trash = *head;
		while (trash != NULL)
		{
			if (index == i)
			{
				if (trash->next == NULL)
					return (del_node_end(*head));

				trash->prev->next = trash->next;
				trash->next->prev = trash->prev;
				free(trash);
				return (1);
			}
			i++;
			trash = trash->next;
		}
	}
	return (-1);
}
