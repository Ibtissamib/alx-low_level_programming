#include "lists.h"
/**
 * free_listint2- frees a listint_t list.
 * @head: double pointer to listint_t
 *
 * return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *fr;

	if (head == NULL)
		return;
	node = *head;
	while (node)
	{
		fr = node;
		node = node->next;
		free(fr);
	}
	*head = NULL;
}
