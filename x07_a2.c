#include <stdio.h>

int main(int argc, char *argv[]) {
	int c;
	int count = 0;

	// get one character
	while ((c = getchar()) != EOF) {
		if ((c>='A' && c<='F') || (c>='T' && c<='Z'))
			count++;
	}
	printf("%d\n", count);
}
