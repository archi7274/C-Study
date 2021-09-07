#include<stdio.h>


int main_static() {
	static int i = 7, * p, ** pp;
	p = &i;
	pp = &p;


	printf("p\'s Address = %p\n", p);
	printf("pp\'s Address = %p\n", p);

	(*p)++;
	printf("i = %d \t", i);
	printf("*p = %d\t", *p);
	printf("**pp = %d\t", **pp);

	(**pp)++;
	printf("i = %d\t", i);
	printf("*p = %d\t", *p);
	printf("**pp = %d\t", **pp);
	return 0;

}


int main_ls() {
	char string[] = "Hello";
	char* pstr = string;
	while (*pstr) {
		putchar(*pstr++);

	}
	return 0;
}