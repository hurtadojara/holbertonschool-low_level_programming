#include "lists.h"
/**
	* len - get lenght of string
	* @str: string
	* Return: lenght of str
	*/
int len(const char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
		counter++;

	return (counter);
}
/**
	* add_node - addnode
	* @head: head
	* @str: string
	* Return: &node
	*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
