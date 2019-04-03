#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	int data;
	struct NODE *next;
} node_t;

int square(node_t *curr) {
	while (curr) {
		printf("%d",curr->data);
		curr->data = curr->data * curr->data;
		printf("\t%d\n",curr->data);
		curr = curr->next;
	}
	return 0;
}

int squareRecursion(node_t *curr) {
	if (curr == 0) return 0;
	printf("%d",curr->data);
	curr->data = curr->data * curr->data;
	printf("\t%d\n",curr->data);
	squareRecursion(curr->next);
}

int main() {
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
	printf("\n");
	squareRecursion(head);
}
