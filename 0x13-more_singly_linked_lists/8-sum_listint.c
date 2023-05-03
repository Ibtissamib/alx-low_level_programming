#include "lists.h"
/**
 * sum_listint- returns the sum of all the data (n) of a list
 * @head: pointer to listint_t
 *
 * Return: Integer
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s = s + head->n;
		head = head->next;
	}
	return (s);
}
