#include "lists.h"
/**
 * print_listint - prints all elements of the list
 * @h: points to node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	num = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
