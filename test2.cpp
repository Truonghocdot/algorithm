#include <stdio.h>
#include <stdlib.h>

Struct Node {
	int n;
	Struct Node
	int * r;
}

int summaryOfSquareTon (int n) {
	if(n < 2) return 1;
	return n*n + summaryOfSquareTon(n - 1);
}

void printReverseOfNumber (int n ) {
	if(n == 0) return;
	printf("%d",n%10);
	
	printReverseOfNumber(n/10);
}

int main() {
	int n;
	printf("Type the value of n ");
	scanf("%d", &n );
	printReverseOfNumber(n);
//	printf("The value after caculate: %d", summaryOfSquareTon(n));
	return 0;
}