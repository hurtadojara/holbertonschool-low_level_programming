#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to first node
 * @index: index of the node, starting at 0
 *
 * Return: address of the nth node, NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nnode = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (nnode != NULL && i < index)
	{
		nnode = nnode->next;
		i++;
	}
	if (nnode == NULL)
		return (NULL);
	return (nnode);
}
