#include<stdio.h>
void main() {
	int a;
	int n;
	int i;

	printf("n = ");
	scanf_s("%d", &n);

	a = 1;
	i = 1;
	do {
		if (a % 2 == 0) {
			a += 2;
		}
		else {
			a += 1;
		}
		printf("%d ", a);
		i += 1;
	} while (i <= n);
}