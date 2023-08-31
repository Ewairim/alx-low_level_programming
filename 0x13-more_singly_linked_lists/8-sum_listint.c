#include "lists.h"
/**
 * sum_listint - add the value of nodes
 * @head: list
 * Return: sum or null
 */
int sum_listint(listint_t *head)
{
	size_t sum;
	listint_t *temp;

	temp = head;
	sum = temp->n;

	if (head == NULL)
		return (0);
	while (temp->next != 0)
	{
		temp = temp->next;
		sum = sum + (temp->n);
	}
	return (sum);
}
