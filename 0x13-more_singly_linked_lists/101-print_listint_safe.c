#include "lists.h"
/**
 * reverse_listint- prints a listint_t linked list.
 * @head: pointer to listint_t
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nbr = 0;
	const listint_t *memory_addresses[1000];
	int i = 0, j = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		printf("[%p] %d\n",(const void *)head, head->n);
		nbr++;
		head = head->next;
		memory_addresses[i] = head;
		i++;
		while (j < i)
		{
			if (memory_addresses[j] == head)
				exit(98);
			j++;

		}
		j = 0;
	}
	return (nbr);
}
