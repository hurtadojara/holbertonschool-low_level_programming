#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of a dlistint_t list.
 * @head: pointer to old first node
 * @n: int to be copied to new_node->n
 *
 * Return: address of the node element, NULL if it failel
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		*head = node;
		return (node);
	}
	(*head)->prev = node;
	node->next = *head;
	node->prev = NULL;
	*head = node;
	return (node);
}
