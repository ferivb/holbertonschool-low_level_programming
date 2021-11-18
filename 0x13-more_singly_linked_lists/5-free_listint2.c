#include "lists.h"
/**
  * free_listint2 - Function that fress a list
  * @head: Main node
  * Return: Head
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *new;

	temp = *head;
	while (temp != NULL)
	{
		new = temp->next;
		free(temp);
		temp = new;
	}
	*head = NULL;
}
