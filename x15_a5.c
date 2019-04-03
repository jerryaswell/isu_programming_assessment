#include <stdio.h>

int count1(int n) {
	int mask = 1;
	int count = 0;

	for (int i=0; i<=30; i++) {
		if ( n & mask)
			count++;

		n = n>>1;
	}
	return count;
}

int main(int argc, char *argv[]) {
	printf("%d\n", count1(3));
}
