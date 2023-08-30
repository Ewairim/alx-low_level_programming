#include "lists.h"
/**
 * add_nodeint - add new node at beginning
 * @head: list
 * @n: element of new node
 * Return: adress of newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	newnode->n = n;

	if (newnode)
	newnode->next = (*head);
	(*head) = newnode;
	return (newnode);

}
