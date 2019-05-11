#include<stdio.h>
#include<string.h>

void htoi(char c[]) {
	int len = strlen(c);

	int base = 1;
	int decimal = 0;

	for (int i = len - 1; i >= 0; i--)
	{
		if(c[i] >= '0' && c[i] <= '9') {
			decimal += (c[i] - 48) * base;
		} else if(c[i] >= 'A' && c[i] <= 'F') {
			decimal += (c[i] - 55) * base;
		}

		base *= 16;
	}
	printf("%d\n", decimal);
}
void main() {

	char s[] = "BA";
	htoi(s);
}