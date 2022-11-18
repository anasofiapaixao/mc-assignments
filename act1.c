#include <stdio.h>

void main(void) {
	int val1=0, val2=0;
	printf("input (syntax:val1<space>val2):");
	scanf("%d %d", &val1, &val2);
	printf("output: %d %d", val1, val2);
	return 0;
}