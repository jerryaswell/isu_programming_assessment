#include <stdio.h>

int main(int argc, char *argv[]) {
	int count = 0;
	char curr;

	while ( (curr = getchar()) != EOF ) {
		if ( (curr >= 'a') && (curr <= 'm') )
			count++;
	}
	printf("%d\n", count);
	return 0;
}
