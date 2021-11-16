#include "lists.h"

/**
  * list_len - Returns the amount of nodes in a list
  * @h: Head of the list
  * Return: lenght of the list
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = (*h).next;
	}
	return (count);
}
