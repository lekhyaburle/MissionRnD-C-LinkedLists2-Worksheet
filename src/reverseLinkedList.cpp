/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * reverseLinkedList(struct node *head)
{
	struct node *temp, *h;
	int x[100], i = 0;
	temp = head;
	h = head;
	if (head == NULL) return NULL;
	while (temp != NULL)
	{
		x[i] = temp->num;
		temp = temp->next;
		i++;
	}i--;
	while (i >= 0 && h != NULL)
	{
		h->num = x[i];
		i--;
		h = h->next;
	}
	return head;
}


