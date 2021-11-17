#include "lists.h"
/**
  * free_list - Function that fress a list
  * @head: Main node
  * Return: Head
  */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *new;

	temp = head;
	while (temp != NULL)
	{
		new = temp->next;
		free(temp->str);
		free(temp);
		temp = new;
	}
}
