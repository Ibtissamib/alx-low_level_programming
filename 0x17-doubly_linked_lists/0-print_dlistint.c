#include "lists.h"
/**
 * print_dlistint- prints
 * @h: pointer to const dlistint_t
 *
 * Return: NBR OF NODES
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nbr++;
		h = h->next;
	}
	return (nbr);
}
