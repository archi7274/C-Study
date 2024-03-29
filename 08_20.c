#include<stdio.h>

void swap1(int a, int b) {
	int t = a; a = b; b = t;
}

void swap2(int* c, int* d) {
	int t = *c; *c = *d; *d = t;
}

int main_callbyref() {
	int a = 5, b = 7;
	printf("a = %d, b = %d\n", a, b);
	swap1(a, b);
	printf("a = %d, b = %d\n", a, b);
	swap2(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

