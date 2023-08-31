#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to the list
 * Return: return data of new head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);
	else
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return ((*head)->n);
}
