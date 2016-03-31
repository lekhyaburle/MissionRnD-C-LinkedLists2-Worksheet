/*
OVERVIEW: Merge two sorted nexted lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted nexted lists.

OUTPUT: Return merged sorted nexted list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>


struct node {
	int num;
	struct node *next;
};
struct node *insertend(struct node *first, int x);

struct node * merge2LinkedLists(struct node *head1, struct node *head2) {
	struct node *temp1, *temp2,*l;
	temp1 = head1;
	temp2 = head2;
	l = NULL;
	if (head1==NULL&&head2==NULL)
	return NULL;
	if (head1 == NULL)return head2;
	if (head2 == NULL)return head1;
	
	while (temp1 != NULL && temp2 != NULL)
	{
		if (temp1->num < temp2->num)
		{

			l = insertend(l, temp1->num);
			temp1 = temp1->next;
		


		}
		else
		{
			l = insertend(l, temp2->num);
			temp2 = temp2->next;

			
		}
		
	}
	while (temp1 == NULL && temp2!=NULL)
	{
		l= insertend(l, temp2->num);
		temp2 = temp2->next;
		
	}
	while (temp2 == NULL && temp1!=NULL)
	{
		l = insertend(l, temp1->num);
			temp1 = temp1->next;
	}
	
	return l;
	}
	
struct node *insertend(node *first, int x)
{
	node *t, *p;
	p = (node *)malloc(sizeof(struct node));
	p->num = x;
	p->next = NULL;
	if (first == NULL)
	{
		first = p;
		return first;
	}
	t = first;
	while (t->next != NULL)
	{
		t = t ->next;

	}
	t->next = p;
	return first;
}