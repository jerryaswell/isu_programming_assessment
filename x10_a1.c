#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;

	// Get integer 'n' from the user
	scanf("%d", &n);

	// The first pattern is 1 X and 'n' Y's
	int x=1;
	int y=n;

	// Print 'n' repititions of the pattern: some X's, some Y's
	for (int i=n; i>0; i--) {
		for (int i=x; i>0; i--)
			printf("X");

		for (int i=y; i>0; i--)
			printf("Y");

		// Next repitition will have three more X's
		x = x+3;
		// Next repitition will have one less Y
		y = y-1;
	}
	printf("\n");
	return 0;
}
