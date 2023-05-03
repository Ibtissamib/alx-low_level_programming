#include "lists.h"
/**
 * get_nodeint_at_index- returns the nth node of a listint_t linked list.
 * @head: pointer to listint_t
 * @index: unsigned int
 *
 * Return: pointer to listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	node = head;
	n = 0;
	while (node != NULL && n < index)
	{
		node = node->next;
		n++;
	}
	return (node);
}
