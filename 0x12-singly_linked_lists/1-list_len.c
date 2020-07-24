#include "lists.h"
/**
 * list_len - get nodes
 * @h: list
 * Return: nodes
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
