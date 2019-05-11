#include<stdio.h>

void main() {
	int nc = 0;
	while(getchar() != EOF) {
		nc++;
	}
	printf("%1d\n", nc);
}