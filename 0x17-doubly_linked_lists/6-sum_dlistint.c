#include "lists.h"

/**
 * sum_dlistint - Sums all the values from a DLL
 *
 * @head: linked list
 * Return: Sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
