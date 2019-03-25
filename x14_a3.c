#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	int data;
	struct NODE *next;
} node_t;

int equal(node_t *curr) {
	int count = 0;

	while (curr) {
		if ((curr->next) && (curr->data == curr->next->data))
			count++;

		curr = curr->next;
	}
	return count;
}

int equalRecursion(node_t *curr) {
	if (curr == 0) return 0;
	if (curr->next)
		return (curr->data == curr->next->data) +
			equal(curr->next);
}

void main() {
	int n;
	//build the list.
	node_t *head = 0;
	while ( 1==scanf("%d", &n) ) {
		//process the new number
		//make a new node   
		node_t *nb = malloc(sizeof(node_t));
		//put the data into the node
		nb->data = n;
		//put the node into the list
		nb->next = head;
		head = nb;
	}
	printf("%d\n",equal(head));
	printf("%d\n",equalRecursion(head));
}
