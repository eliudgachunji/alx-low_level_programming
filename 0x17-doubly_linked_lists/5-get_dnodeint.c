#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of list
 * @index: index of the node
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{

size_t j = 0;

if (head == NULL)
return (NULL);

while (head != NULL)

{

if (j == index)
break;

head = head->next;
j++;

}

return (head);
}
