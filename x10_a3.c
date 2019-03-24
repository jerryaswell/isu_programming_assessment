#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	int data;
	struct NODE *next;
} node_t;

int addOdd(node_t *curr) {
	int sum = 0;

	while (curr) {
		if (curr->data % 2)
			sum += curr->data;

		curr = curr->next;
	}
	return sum;
}

int addOddRecursion(node_t *curr) {
	if (curr == 0) return 0;
	if (curr->data % 2) return curr->data + addOddRecursion(curr->next);
	return addOddRecursion(curr->next);
}

void main() {
	int n;
	//build the list.
	node_t *head = 0;
	while (1==scanf("%d", &n) ) {
		//process the new number
		//make a new node   
		node_t *nb = malloc(sizeof(node_t));
		//put the data into the node
		nb->data = n;
		//put the node into the list
		nb->next = head;
		head = nb;
	}
	printf("%d\n",addOdd(head));
	printf("%d\n",addOddRecursion(head));
}
