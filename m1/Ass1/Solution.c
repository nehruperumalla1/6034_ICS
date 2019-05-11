#include<stdio.h>

void main() {
	char c = getchar();
	int i = 0;
	char s[100];
	int check = 0;
	printf("%d", 00700);
	while(c != EOF) {
		if(check == 0 && c == ' ') {
			check = 1;
			s[i++] = c;
		} else if(c != 32) {
			check = 0;
			s[i++] = c;
		}
		c = getchar();
		if (c == '\n') {
			printf("%s\n", s);
			i = 0;
		}
	}
}