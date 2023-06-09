#include "lists.h"
/**
 * print_listint- prints all the elements of a listint_t list.
 * @h: pointer to const listint_t
 *
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t nbr = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nbr++;
	}
	return (nbr);
}
