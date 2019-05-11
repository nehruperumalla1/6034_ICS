#include<stdio.h>
void swap(int a, int b);
void main() {
	int a, b;
	scanf("%d %d", &a, &b);
	swap(a, b);
	printf("%d\t%d", a, b);
}

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
