#include "lists.h"

/**
  * _slen - counts amount of chars in a string
  * @str: string to count
  * Return: amount of chars
  */
unsigned int _slen(const char *str)
{
	unsigned int count = 0;

	for (; str[count] != '\0'; count++)
	{
		continue;
	}
	return (count);
}

/**
  * add_node - adds a node to the beggining of the list
  * @head: head of the list
  * @str: data for new nodce
  * Return: Address for the last element
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _slen(str);
	new->next = *head;
	*head = new;
	return (new);
}
