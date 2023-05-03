#include "lists.h"
/**
 * delete_nodeint_at_index- deletes the node at index index of a listint_t
 * linked list.
 * @head: double pointer to listint_t
 * @index: unsigned int
 *
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *nd;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			nd->next = node->next;
			free(node);
			return (1);
		}
		i++;
		nd = node;
		node = node->next;
	}
	return (-1);
}
