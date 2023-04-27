#include "lists.h"
/**
 * add_node_end- a new node at the end of a list_t list.
 * @head: double pointer to list_t
 * @str: pointer to const char
 *
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node = *head;
	int nbr = 0;

	if (head == NULL || new_node == NULL)
		return (NULL);
	while (str[nbr])
		nbr++;
	if (str != NULL)
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = nbr;
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
