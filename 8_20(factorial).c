#include<stdio.h>

int fac(int c) {
	return((c == 0) ? 1 : c * fac(c - 1));
}

int fac1(int c) { //재귀적 용법
	if (c == 0) {
		c = 1;
	}
	else{
		c = c * fac(c - 1);
	}
	return c;
}

int fac2(int num) { //반복문 사용
	int result = 1;
	for (int i = 1; i <= num; i++) {
		result = result * i;
	}
	return result;
}
int main_factorial() {
	for (int i = 0; i <= 50; i++) {
		printf("%d! = %d\n", i, fac1(i));
	}
	return 0;
}


