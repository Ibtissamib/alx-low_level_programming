#include "lists.h"
/**
 * reverse_listint- prints a listint_t linked list.
 * @head: pointer to listint_t
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	if (head == NULL)
		return (0);
	while (head)
	{
		n++;
		head = head->next;
	}
	return (n);
}
