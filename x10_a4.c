#include<stdlib.h>
#include<stdio.h>

typedef struct BST_NODE_T {
	int data;
	struct BST_NODE_T *left, *right;
} bst_node_t;

int sum(bst_node_t *curr) {
	if (curr == 0)
		return 0;

	return curr->data + sum(curr->left) + sum(curr->right);
}

int main() {
	int n;
	bst_node_t *root = 0;
	//building bst from incoming integer data
	while(1==scanf("%d", &n)) {
		bst_node_t *nb = malloc(sizeof(bst_node_t));
		nb->data = n;
		nb->left=0;
		nb->right=0;
		//put the new node into the bst
		//search for insertion location
		bst_node_t *curr=root;
		bst_node_t *prev=0;

		while(curr!=0) {
			prev = curr;
			if (n>curr->data)
				 curr = curr->right;
			else
				 curr = curr->left;
		}

		if (prev==0) {
			root = nb;
		} else {
			if (n>prev->data)
				prev->right = nb;
		else
			prev->left = nb;
		}

	}
	//finished building the tree
	printf("%d\n",sum(root));
}
