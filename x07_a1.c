#include <stdio.h>

int main(int argc, char *argv[]){
	int n;

	// Read input from the user as a decimal
	scanf("%d", &n);

	int numA = 1;
	int numB = n;

	// Iterate as many times as specified by the user
	for (int i=0; i<n; i++) {

		for (int j=0; j<numA; j++)
			printf("A");

		for (int j=0; j<numB; j++)
			printf("B");

		printf("C");

		// Print one more 'A' next time
		numA++;
		// Print one less 'B' next time
		numB--;
	}
	printf("\n");
	return 0;
}
