#include "lists.h"
/**
 * dlistint_len - returns the n of elements in a linked dlistint_t list.
 * @h: points to the first node of the list
 *
 * Return: n of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *actual = h;
	size_t n = 0;

	while (actual != NULL)
	{
		n++;
		actual = actual->next;
	}
	return (n);
}
