#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at a certain index
 * @idx: position to add node
 * @n: data of new node
 * @head: list
 * Return: newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	temp = *head;
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || i != idx - 1)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
