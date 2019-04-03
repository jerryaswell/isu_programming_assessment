#include <stdio.h>

int count101(int n){
	int count = 0;

	for (int i=0; i<30; i++) {
		if ((n&7) == 5)
			count++;
		n = n>>1;
	}
	return(count);
}

void main() {
	printf("%d\n",count101(173));
}
