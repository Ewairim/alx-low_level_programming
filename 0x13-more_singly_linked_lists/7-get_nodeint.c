#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to the list
 * @index: index we are lookin for
 * Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *temp = head;

	count = 0;
	if (temp == NULL)
		return (NULL);
	while (count != index)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}
