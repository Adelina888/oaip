#include<stdio.h>
void main() {
	int a;
	int n;
	int i;
	int b;

	printf("n = ");
	scanf_s("%d", &n);

	printf("a = ");
	scanf_s("%d", &a);

	b = 1;
	i = 1;
	do {
		if (b % a == 0) {
			b += 4;
		}
		else {
			b *= 4;
		}
		i += 1;
		printf("%d ", b);
	} while (i <= n);
}