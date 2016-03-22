/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	int x = 1, i = 0;
	struct node *temp; temp = head;
	if (head == NULL) return -1;
	while (temp != NULL){
		temp = temp->next;
		i++;
	}
	temp = head;
	if (i % 2 == 1)
	{
		i = (i / 2) + 1;
		while (temp != NULL)
		{
			if (i == x){ return temp->num; }x++; temp = temp->next;
		}
	}
	else{
		i = i / 2;
		while (temp != NULL)
		{
			if (i == x){
				return	(temp->num + temp->next->num) / 2;

			}
			x++; temp = temp->next;
		}

	}


}




