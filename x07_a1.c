#include <stdio.h>

int main(int argc, char *argv[]){
	int n;

	scanf("%d", &n);

	int numA = 1;
	int numB = n;

	for (int i=0; i<n; i++) {
		for (int j=0; j<numA; j++)
			printf("A");
		for (int j=0; j<numB; j++)
			printf("B");
		printf("C");
		numA++;
		numB--;
	}
	printf("\n");
	return 0;
}
