#include <stdio.h>

int i = 7;
extern void func1();

int main_aboudtextern()
{
	int i = 5;
	func1();
	i++;
	printf("i=%d\n", i);
	return 0;
}