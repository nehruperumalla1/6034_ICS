#include<stdio.h>

void main() {
	 char a = getchar();
	 int i = 0, j = 0;
	 char s[100];
	 while(a != EOF) {
	 	// putchar(a);
	 	if(a == '\n') {
	 		int start = i;
	 		int end = j - 1;
	 		// printf("%d", start);
	 		while(start <= end) {
	 			char temp = s[start];
	 			s[start] = s[end];
	 			s[end] = temp;
	 			start++;
	 			end--;
	 			// printf("%c\n", s[start]);
	 		}
	 		printf("%s\n", s);
	 	} else {
	 		s[j] = a;
	 		j++;
	 		// printf("%s", s);
	 	}
	 	a = getchar();
	 }
}