#include<stdio.h>
void main() {
	int sum;
	int year;
	float percent;

	printf("summ = ");
	scanf_s("%d", &sum);

	printf("year = ");
	scanf_s("%d", &year);

	printf("percent = ");
	scanf_s("%f", &percent);

	year = 0;
	do {
		printf("%d RUB in %d year\n",sum,year);
		sum = (sum * (100 + percent)) / 100;
		year += 1;

	} while (year <= 10);

}