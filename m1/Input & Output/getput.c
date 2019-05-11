#include<stdio.h>

void main() {
	char c = getchar();
	while(c != EOF) {
		printf("%d\n", c != EOF);
		putchar(c);
		printf("%d\n", EOF);
		c = getchar();
	}
}