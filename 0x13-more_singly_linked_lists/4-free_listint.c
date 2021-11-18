#include "lists.h"
/**
  * free_listint - Function that fress a list
  * @head: Main node
  * Return: Head
  */
void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *new;

	temp = head;
	while (temp != NULL)
	{
		new = temp->next;
		free(temp);
		temp = new;
	}
}
