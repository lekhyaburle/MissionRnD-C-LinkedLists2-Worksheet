/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K) {
	int j = 1;
	struct node *t, *p;
	if (head == NULL || K<1)
		return NULL;
	t = head;

	while (t != NULL)
	{
		if (j == K)
		{
			p = (node *)malloc(sizeof(node));
			p->num = K;
			p->next = t->next;
			t->next = p;
			t = t->next;
			j = 0;
		}
		t = t->next;
		j++;
	}return head;
}
