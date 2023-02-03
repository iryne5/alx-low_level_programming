#include "lists.h"

/**
 *  * listint_len - Calculate the number of elements.
 *   * @h: Pointer to a list.
 *    * Return: Integer.
 *     **/

size_t listint_len(const listint_t *h)
{
		size_t nodes = 0;

		while (h)
		{
			nodes++;
			h = h->next;
		}

		return (nodes);
}
