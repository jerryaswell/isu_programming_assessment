#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	int XO = 1;

	scanf("%d", &n);

	for (int i=0; i<n; i++) {
		for (int j=0; j<XO; j++)
			printf("XO");

		XO++;
		printf("B");
	}
	printf("\n");
	return 0;
}
