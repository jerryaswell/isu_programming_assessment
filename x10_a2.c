#include <stdio.h>

int main(int argc, char *argv[]) {
	int count = 0;
	char curr = 0;
	char prev = 0;

	while ( (curr = getchar()) != EOF ) {
		if ( (curr == 'A') && (prev == ' ') )
			count++;

		prev = curr;
	}

	printf("%d\n", count);
	return 0;
}
