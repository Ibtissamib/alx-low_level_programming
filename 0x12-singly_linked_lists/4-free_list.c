#include "lists.h"
/**
 * free_list- frees a list_t list.
 * @head: pointer to list_t
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (head == NULL)
		return;
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
