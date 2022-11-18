#include <stdio.h>

void main(void) {
	int a=0, b=0;
	printf("input (syntax: value1<space>value2):");
	scanf("%d %d", &a, &b);
	printf("output: %d %d", a, b);
}