#include<stdio.h>
void main() {
	int a;
	int n;

	printf("n = ");
	scanf_s("%d", &n);

	a = 0;
	do {
		if (a % 2 != 0) {
			a += 2;
		}
		else {
			a += 1;
		}
		printf("%d ", a);
	} while (a < n);
}