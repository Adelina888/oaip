#include<stdio.h>
void main() {
	int i;
	int stepen;

	i = 0;
	stepen = 1;
	
	do {
		printf("2^%d = %d\n", i, stepen);
		i += 1;
		stepen*=2;
	} while (i <= 5);


}