#include "lists.h"
/**
 * print_list - print nodes
 * @h: list
 * Return: nodes
 */
size_t print_list(const list_t *h)
{
	char *s = 0;
	int i = 0;

	while (h != NULL)
	{
		s = h->str;
		if (s == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, s);

		i++;
		h = h->next;
	}
	return (i);
}
