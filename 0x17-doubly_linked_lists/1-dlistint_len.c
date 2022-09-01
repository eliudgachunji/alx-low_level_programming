#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Pointer to head node of list
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)

{

size_t res = 0;

while (h != NULL)

{

res++;
h = h->next;

}

return (res);
}
