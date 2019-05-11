#include<stdio.h>

/*void main() {
	float fahr, celsius;
	int low, high, step;

	low = 0;
	high = 300;
	step = 20;

	fahr = low;
	while(fahr <= high) {
		celsius = 5.0/9.0 * (fahr - 32);
		printf("%3f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}*/


void main() {
	float fahr, celsius;
	int low, high, step;

	low = 0;
	high = 300;
	step = 20;

	for (fahr = 0; fahr <= high; fahr = fahr + step)
	{
		printf("%3f\t%6.1f\n", fahr, 5.0/9.0 * (fahr - 32));
	}
}