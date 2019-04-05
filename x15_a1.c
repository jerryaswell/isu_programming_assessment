#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	int p = 1;
	int q = p;
	
	// Get integer 'n' from the user
	scanf("%d", &n);

	// Iterate as many times as the user specified
	while (n>0) {
		for ( int i = 0; i < q; i++ )
			printf("X");

		printf("0");

		p = p+2;
		q = q+p;
		n--;
	}
	printf("\n");

}
