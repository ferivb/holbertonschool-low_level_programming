#include "lists.h"

/**
  * _slen - Counts amount of chars in string.
  * @str: string to count chars from.
  * Return: string lenght
  */
unsigned int _slen(const char *str)
{
	unsigned int i = 0;

	for (; str[i] != '\0'; i++)
		continue;
	return (i);
}

/**
  * add_node_end - adds a node to the end of the list
  * @head: head of the list.
  * @str: data to add to the nodes
  * Return: link to the last node.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _slen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
