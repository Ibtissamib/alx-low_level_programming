#include "lists.h"
/**
 * listint_len-  returns the number of elements in a linked listint_t list.
 * @h: pointer to const listint_t
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t nbr = 0;

	while (h)
	{
		h = h->next;
		nbr++;
	}
	return (nbr);
}
