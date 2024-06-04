#include "lists.h"
/**
  * sum_dlistint- returns the sum of all the data (n) of a linked list.
  * @head: dlistint_t
  * Return: int
  */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head)
	{
		s = s + head->n;
		head = head->next;
	}
	return (s);
}
