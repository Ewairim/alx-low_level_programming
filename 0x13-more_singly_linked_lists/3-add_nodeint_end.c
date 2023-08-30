#include "lists.h"
/**
 * add_nodeint_end - add node at the end of list
 * @head: pointer to pointer to list
 * @n: element of newnode
 * Return: adress of newnode or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	temp = *head;
	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;

	if (!newnode)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	if (temp->next != 0)
		temp = temp->next;
	temp->next = newnode;
	return (newnode);
}
