#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>


static int i = 7;
void func1();	void func2();



int main_12()
{
	int i = 5;
	func1();
	i++;
	printf("i=%d\n", i);
	return 0;

}

//void func1() {
//	i++;
//	printf("func1 i = %d \n", i);
//	func2();
//}
//
//void func2() {
//	i++;
//	printf("func2 i = %d \n", i);
//}



//int i = 7;
//void func1();	void func2();
//
//
//int main()
//{
//	i = 5;
//	func1();
//	i++;
//	printf("i=%d\n", i);
//	return 0;
//
//}
//
//void func1() {
//	i++;
//	printf("func1 i = %d \n", i);
//	func2();
//}
//
//void func2() {
//	i++;
//	printf("func2 i = %d \n", i);
//}






