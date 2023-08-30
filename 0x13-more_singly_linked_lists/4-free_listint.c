#include "lists.h"
/**
 * free_listint - free list
 * @head: list to be freed
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head->next;
	free(head->n);
	free(head);
	head = temp;
}
